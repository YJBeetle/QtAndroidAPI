#pragma once

#ifndef ANDROID_R_LAYOUT
#define ANDROID_R_LAYOUT

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_layout : public __JniBaseClass
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
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
{
	// Fields
	jint R_layout::activity_list_item()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"activity_list_item"
		);
	}
	jint R_layout::browser_link_context_header()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"browser_link_context_header"
		);
	}
	jint R_layout::expandable_list_content()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"expandable_list_content"
		);
	}
	jint R_layout::list_content()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"list_content"
		);
	}
	jint R_layout::preference_category()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"preference_category"
		);
	}
	jint R_layout::select_dialog_item()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"select_dialog_item"
		);
	}
	jint R_layout::select_dialog_multichoice()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"select_dialog_multichoice"
		);
	}
	jint R_layout::select_dialog_singlechoice()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"select_dialog_singlechoice"
		);
	}
	jint R_layout::simple_dropdown_item_1line()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"simple_dropdown_item_1line"
		);
	}
	jint R_layout::simple_expandable_list_item_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"simple_expandable_list_item_1"
		);
	}
	jint R_layout::simple_expandable_list_item_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"simple_expandable_list_item_2"
		);
	}
	jint R_layout::simple_gallery_item()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"simple_gallery_item"
		);
	}
	jint R_layout::simple_list_item_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"simple_list_item_1"
		);
	}
	jint R_layout::simple_list_item_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"simple_list_item_2"
		);
	}
	jint R_layout::simple_list_item_activated_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"simple_list_item_activated_1"
		);
	}
	jint R_layout::simple_list_item_activated_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"simple_list_item_activated_2"
		);
	}
	jint R_layout::simple_list_item_checked()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"simple_list_item_checked"
		);
	}
	jint R_layout::simple_list_item_multiple_choice()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"simple_list_item_multiple_choice"
		);
	}
	jint R_layout::simple_list_item_single_choice()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"simple_list_item_single_choice"
		);
	}
	jint R_layout::simple_selectable_list_item()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"simple_selectable_list_item"
		);
	}
	jint R_layout::simple_spinner_dropdown_item()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"simple_spinner_dropdown_item"
		);
	}
	jint R_layout::simple_spinner_item()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"simple_spinner_item"
		);
	}
	jint R_layout::test_list_item()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"test_list_item"
		);
	}
	jint R_layout::two_line_list_item()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$layout",
			"two_line_list_item"
		);
	}
	
	// Constructors
	void R_layout::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$layout",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_layout : public __jni_impl::android::R_layout
	{
	public:
		R_layout(QAndroidJniObject obj) { __thiz = obj; }
		R_layout()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_R_LAYOUT

