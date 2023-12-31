/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <new>
#include <gui_generated/common/FrontendApplicationBase.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/transitions/NoTransition.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <platform/driver/lcd/LCD16bpp.hpp>
#include <gui/screen_inicializacao_screen/Screen_inicializacaoView.hpp>
#include <gui/screen_inicializacao_screen/Screen_inicializacaoPresenter.hpp>
#include <gui/screen_refusao_screen/Screen_refusaoView.hpp>
#include <gui/screen_refusao_screen/Screen_refusaoPresenter.hpp>
#include <gui/screen_configuracao_screen/Screen_ConfiguracaoView.hpp>
#include <gui/screen_configuracao_screen/Screen_ConfiguracaoPresenter.hpp>

using namespace touchgfx;

FrontendApplicationBase::FrontendApplicationBase(Model& m, FrontendHeap& heap)
    : touchgfx::MVPApplication(),
      transitionCallback(),
      frontendHeap(heap),
      model(m)
{
    touchgfx::HAL::getInstance()->setDisplayOrientation(touchgfx::ORIENTATION_LANDSCAPE);
    touchgfx::Texts::setLanguage(GB);
    reinterpret_cast<touchgfx::LCD16bpp&>(touchgfx::HAL::lcd()).enableTextureMapperAll();
}

/*
 * Screen Transition Declarations
 */

// Screen_inicializacao

void FrontendApplicationBase::gotoScreen_inicializacaoScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen_inicializacaoScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen_inicializacaoScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Screen_inicializacaoView, Screen_inicializacaoPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen_refusao

void FrontendApplicationBase::gotoScreen_refusaoScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen_refusaoScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen_refusaoScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Screen_refusaoView, Screen_refusaoPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Screen_Configuracao

void FrontendApplicationBase::gotoScreen_ConfiguracaoScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreen_ConfiguracaoScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreen_ConfiguracaoScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Screen_ConfiguracaoView, Screen_ConfiguracaoPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}
