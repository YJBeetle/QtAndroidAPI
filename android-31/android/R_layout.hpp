#pragma once

#include "./R_layout.def.hpp"

namespace android
{
	// Fields
	inline jint R_layout::activity_list_item()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"activity_list_item"
		);
	}
	inline jint R_layout::browser_link_context_header()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"browser_link_context_header"
		);
	}
	inline jint R_layout::expandable_list_content()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"expandable_list_content"
		);
	}
	inline jint R_layout::list_content()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"list_content"
		);
	}
	inline jint R_layout::preference_category()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"preference_category"
		);
	}
	inline jint R_layout::select_dialog_item()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"select_dialog_item"
		);
	}
	inline jint R_layout::select_dialog_multichoice()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"select_dialog_multichoice"
		);
	}
	inline jint R_layout::select_dialog_singlechoice()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"select_dialog_singlechoice"
		);
	}
	inline jint R_layout::simple_dropdown_item_1line()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"simple_dropdown_item_1line"
		);
	}
	inline jint R_layout::simple_expandable_list_item_1()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"simple_expandable_list_item_1"
		);
	}
	inline jint R_layout::simple_expandable_list_item_2()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"simple_expandable_list_item_2"
		);
	}
	inline jint R_layout::simple_gallery_item()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"simple_gallery_item"
		);
	}
	inline jint R_layout::simple_list_item_1()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"simple_list_item_1"
		);
	}
	inline jint R_layout::simple_list_item_2()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"simple_list_item_2"
		);
	}
	inline jint R_layout::simple_list_item_activated_1()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"simple_list_item_activated_1"
		);
	}
	inline jint R_layout::simple_list_item_activated_2()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"simple_list_item_activated_2"
		);
	}
	inline jint R_layout::simple_list_item_checked()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"simple_list_item_checked"
		);
	}
	inline jint R_layout::simple_list_item_multiple_choice()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"simple_list_item_multiple_choice"
		);
	}
	inline jint R_layout::simple_list_item_single_choice()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"simple_list_item_single_choice"
		);
	}
	inline jint R_layout::simple_selectable_list_item()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"simple_selectable_list_item"
		);
	}
	inline jint R_layout::simple_spinner_dropdown_item()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"simple_spinner_dropdown_item"
		);
	}
	inline jint R_layout::simple_spinner_item()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"simple_spinner_item"
		);
	}
	inline jint R_layout::test_list_item()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"test_list_item"
		);
	}
	inline jint R_layout::two_line_list_item()
	{
		return getStaticField<jint>(
			"android.R$layout",
			"two_line_list_item"
		);
	}
	
	// Constructors
	inline R_layout::R_layout()
		: JObject(
			"android.R$layout",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

