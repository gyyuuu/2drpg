#include "SampleCharacter.hpp"
#include <iostream>
#include <ncurses.h>
SampleCharacter::SampleCharacter(const DrawableInterface* drawer, const InputInterface* inputer)
   : m_drawer(drawer)
   , m_inputer()
   , m_hp(MAX_HP) {
    m_celllist = celllist(celllistcount_x, std::vector<Cell>(celllistcount_y));
    }

void SampleCharacter::Draw() {
   m_drawer->Draw(m_celllist);
}

void SampleCharacter::Move() {
   m_inputer->Input(m_celllist);
}
