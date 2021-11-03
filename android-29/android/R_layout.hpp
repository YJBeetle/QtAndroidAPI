#pragma once

#include "../JObject.hpp"

namespace android
{
	class R_layout : public JObject
	{
	public:
		// Fields
		static jint activity_list_item();
		static jint browser_link_context_header();
		static jint expandable_list_content();
		static jint list_content();
		static jint preference_category();
		static jint select_dialog_item();
		static jint select_dialog_multichoice();
		static jint select_dialog_singlechoice();
		static jint simple_dropdown_item_1line();
		static jint simple_expandable_list_item_1();
		static jint simple_expandable_list_item_2();
		static jint simple_gallery_item();
		static jint simple_list_item_1();
		static jint simple_list_item_2();
		static jint simple_list_item_activated_1();
		static jint simple_list_item_activated_2();
		static jint simple_list_item_checked();
		static jint simple_list_item_multiple_choice();
		static jint simple_list_item_single_choice();
		static jint simple_selectable_list_item();
		static jint simple_spinner_dropdown_item();
		static jint simple_spinner_item();
		static jint test_list_item();
		static jint two_line_list_item();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R_layout(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_layout(QAndroidJniObject obj);
		
		// Constructors
		R_layout();
		
		// Methods
	};
} // namespace android

