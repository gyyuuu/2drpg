#コンパイラ
CC = clang++

#コンパイルオプション
CFLAGS = -g -MMD -MP -std=C++20 -Wall -Wextra -Winit-self -Wno-missing-field-initializer

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
INCDIR = -I./header

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
