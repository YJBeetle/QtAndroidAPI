#pragma once

#include "../JObject.hpp"

namespace android
{
	class R_id : public JObject
	{
	public:
		// Fields
		static jint accessibilityActionContextClick();
		static jint accessibilityActionHideTooltip();
		static jint accessibilityActionMoveWindow();
		static jint accessibilityActionPageDown();
		static jint accessibilityActionPageLeft();
		static jint accessibilityActionPageRight();
		static jint accessibilityActionPageUp();
		static jint accessibilityActionScrollDown();
		static jint accessibilityActionScrollLeft();
		static jint accessibilityActionScrollRight();
		static jint accessibilityActionScrollToPosition();
		static jint accessibilityActionScrollUp();
		static jint accessibilityActionSetProgress();
		static jint accessibilityActionShowOnScreen();
		static jint accessibilityActionShowTooltip();
		static jint addToDictionary();
		static jint autofill();
		static jint background();
		static jint button1();
		static jint button2();
		static jint button3();
		static jint candidatesArea();
		static jint checkbox();
		static jint closeButton();
		static jint content();
		static jint copy();
		static jint copyUrl();
		static jint custom();
		static jint cut();
		static jint edit();
		static jint empty();
		static jint extractArea();
		static jint hint();
		static jint home();
		static jint icon();
		static jint icon1();
		static jint icon2();
		static jint icon_frame();
		static jint input();
		static jint inputArea();
		static jint inputExtractEditText();
		static jint keyboardView();
		static jint list();
		static jint list_container();
		static jint mask();
		static jint message();
		static jint navigationBarBackground();
		static jint paste();
		static jint pasteAsPlainText();
		static jint primary();
		static jint progress();
		static jint redo();
		static jint replaceText();
		static jint secondaryProgress();
		static jint selectAll();
		static jint selectTextMode();
		static jint selectedIcon();
		static jint shareText();
		static jint startSelectingText();
		static jint statusBarBackground();
		static jint stopSelectingText();
		static jint summary();
		static jint switchInputMethod();
		static jint switch_widget();
		static jint tabcontent();
		static jint tabhost();
		static jint tabs();
		static jint text1();
		static jint text2();
		static jint textAssist();
		static jint title();
		static jint toggle();
		static jint undo();
		static jint widget_frame();
		
		// QJniObject forward
		template<typename ...Ts> explicit R_id(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_id(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		R_id();
		
		// Methods
	};
} // namespace android

