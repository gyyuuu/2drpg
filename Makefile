#コンパイラ
CC = clang++

#コンパイルオプション
CFLAGS = -Weverithing -Werror -Wno-c++98-compat -Wno-c++98-compat-pedantic -Wno-padded

#実行ファイル名
TARGET = Sample

#コンパイル対象のソースコード
SRCS = main.cpp
SRCS += GameSystem.cpp
SRCS += SampleCharacter.cpp
SRCS += SampleMap.cpp
SRCS += ConsoleDrawer.cpp

#オブジェクトファイル名
OBJS = $(SRCS:.cpp=.o)

#インクルードファイルのパス
INCDIR = -I./include

#ライブラリのパス
LIBDIR =

#ライブラリパス
LIBS =

#ターゲットファイル
$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^ $(LIBDIR) $(LIBS)

#オブジェクトファイル生成
$(OBJS): $(SRCS)
    $(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)

#make all(cleanして再ビルド)
all: clean $(OBJS) $(TARGET)

#make clean
clean:
    -rm -f $(OBJS) $(TARGET)
