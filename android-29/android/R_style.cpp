#include "./R_style.hpp"

namespace android
{
	// Fields
	jint R_style::Animation()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Animation"
		);
	}
	jint R_style::Animation_Activity()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Animation_Activity"
		);
	}
	jint R_style::Animation_Dialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Animation_Dialog"
		);
	}
	jint R_style::Animation_InputMethod()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Animation_InputMethod"
		);
	}
	jint R_style::Animation_Toast()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Animation_Toast"
		);
	}
	jint R_style::Animation_Translucent()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Animation_Translucent"
		);
	}
	jint R_style::DeviceDefault_ButtonBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"DeviceDefault_ButtonBar"
		);
	}
	jint R_style::DeviceDefault_ButtonBar_AlertDialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"DeviceDefault_ButtonBar_AlertDialog"
		);
	}
	jint R_style::DeviceDefault_Light_ButtonBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"DeviceDefault_Light_ButtonBar"
		);
	}
	jint R_style::DeviceDefault_Light_ButtonBar_AlertDialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"DeviceDefault_Light_ButtonBar_AlertDialog"
		);
	}
	jint R_style::DeviceDefault_Light_SegmentedButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"DeviceDefault_Light_SegmentedButton"
		);
	}
	jint R_style::DeviceDefault_SegmentedButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"DeviceDefault_SegmentedButton"
		);
	}
	jint R_style::Holo_ButtonBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Holo_ButtonBar"
		);
	}
	jint R_style::Holo_ButtonBar_AlertDialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Holo_ButtonBar_AlertDialog"
		);
	}
	jint R_style::Holo_Light_ButtonBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Holo_Light_ButtonBar"
		);
	}
	jint R_style::Holo_Light_ButtonBar_AlertDialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Holo_Light_ButtonBar_AlertDialog"
		);
	}
	jint R_style::Holo_Light_SegmentedButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Holo_Light_SegmentedButton"
		);
	}
	jint R_style::Holo_SegmentedButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Holo_SegmentedButton"
		);
	}
	jint R_style::MediaButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"MediaButton"
		);
	}
	jint R_style::MediaButton_Ffwd()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"MediaButton_Ffwd"
		);
	}
	jint R_style::MediaButton_Next()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"MediaButton_Next"
		);
	}
	jint R_style::MediaButton_Pause()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"MediaButton_Pause"
		);
	}
	jint R_style::MediaButton_Play()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"MediaButton_Play"
		);
	}
	jint R_style::MediaButton_Previous()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"MediaButton_Previous"
		);
	}
	jint R_style::MediaButton_Rew()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"MediaButton_Rew"
		);
	}
	jint R_style::TextAppearance()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance"
		);
	}
	jint R_style::TextAppearance_DeviceDefault()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_DialogWindowTitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_DialogWindowTitle"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Inverse"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Large"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Large_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Large_Inverse"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Medium()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Medium"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Medium_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Medium_Inverse"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_SearchResult_Subtitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_SearchResult_Subtitle"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_SearchResult_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_SearchResult_Title"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Small"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Small_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Small_Inverse"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_ActionBar_Menu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_ActionBar_Menu"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_ActionBar_Subtitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_ActionBar_Subtitle"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_ActionBar_Subtitle_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_ActionBar_Subtitle_Inverse"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_ActionBar_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_ActionBar_Title"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_ActionBar_Title_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_ActionBar_Title_Inverse"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_ActionMode_Subtitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_ActionMode_Subtitle"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_ActionMode_Subtitle_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_ActionMode_Subtitle_Inverse"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_ActionMode_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_ActionMode_Title"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_ActionMode_Title_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_ActionMode_Title_Inverse"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_Button()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_Button"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_DropDownHint()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_DropDownHint"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_DropDownItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_DropDownItem"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_EditText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_EditText"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_IconMenu_Item()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_IconMenu_Item"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_PopupMenu"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_PopupMenu_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_PopupMenu_Large"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_PopupMenu_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_PopupMenu_Small"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_TabWidget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_TabWidget"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_TextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_TextView"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_TextView_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_TextView_PopupMenu"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_Widget_TextView_SpinnerItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_Widget_TextView_SpinnerItem"
		);
	}
	jint R_style::TextAppearance_DeviceDefault_WindowTitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DeviceDefault_WindowTitle"
		);
	}
	jint R_style::TextAppearance_DialogWindowTitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_DialogWindowTitle"
		);
	}
	jint R_style::TextAppearance_Holo()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo"
		);
	}
	jint R_style::TextAppearance_Holo_DialogWindowTitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_DialogWindowTitle"
		);
	}
	jint R_style::TextAppearance_Holo_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Inverse"
		);
	}
	jint R_style::TextAppearance_Holo_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Large"
		);
	}
	jint R_style::TextAppearance_Holo_Large_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Large_Inverse"
		);
	}
	jint R_style::TextAppearance_Holo_Medium()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Medium"
		);
	}
	jint R_style::TextAppearance_Holo_Medium_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Medium_Inverse"
		);
	}
	jint R_style::TextAppearance_Holo_SearchResult_Subtitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_SearchResult_Subtitle"
		);
	}
	jint R_style::TextAppearance_Holo_SearchResult_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_SearchResult_Title"
		);
	}
	jint R_style::TextAppearance_Holo_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Small"
		);
	}
	jint R_style::TextAppearance_Holo_Small_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Small_Inverse"
		);
	}
	jint R_style::TextAppearance_Holo_Widget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_ActionBar_Menu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_ActionBar_Menu"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_ActionBar_Subtitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_ActionBar_Subtitle"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_ActionBar_Subtitle_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_ActionBar_Subtitle_Inverse"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_ActionBar_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_ActionBar_Title"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_ActionBar_Title_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_ActionBar_Title_Inverse"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_ActionMode_Subtitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_ActionMode_Subtitle"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_ActionMode_Subtitle_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_ActionMode_Subtitle_Inverse"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_ActionMode_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_ActionMode_Title"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_ActionMode_Title_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_ActionMode_Title_Inverse"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_Button()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_Button"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_DropDownHint()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_DropDownHint"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_DropDownItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_DropDownItem"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_EditText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_EditText"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_IconMenu_Item()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_IconMenu_Item"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_PopupMenu"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_PopupMenu_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_PopupMenu_Large"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_PopupMenu_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_PopupMenu_Small"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_TabWidget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_TabWidget"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_TextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_TextView"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_TextView_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_TextView_PopupMenu"
		);
	}
	jint R_style::TextAppearance_Holo_Widget_TextView_SpinnerItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_Widget_TextView_SpinnerItem"
		);
	}
	jint R_style::TextAppearance_Holo_WindowTitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Holo_WindowTitle"
		);
	}
	jint R_style::TextAppearance_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Inverse"
		);
	}
	jint R_style::TextAppearance_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Large"
		);
	}
	jint R_style::TextAppearance_Large_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Large_Inverse"
		);
	}
	jint R_style::TextAppearance_Material()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material"
		);
	}
	jint R_style::TextAppearance_Material_Body1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Body1"
		);
	}
	jint R_style::TextAppearance_Material_Body2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Body2"
		);
	}
	jint R_style::TextAppearance_Material_Button()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Button"
		);
	}
	jint R_style::TextAppearance_Material_Caption()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Caption"
		);
	}
	jint R_style::TextAppearance_Material_DialogWindowTitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_DialogWindowTitle"
		);
	}
	jint R_style::TextAppearance_Material_Display1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Display1"
		);
	}
	jint R_style::TextAppearance_Material_Display2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Display2"
		);
	}
	jint R_style::TextAppearance_Material_Display3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Display3"
		);
	}
	jint R_style::TextAppearance_Material_Display4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Display4"
		);
	}
	jint R_style::TextAppearance_Material_Headline()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Headline"
		);
	}
	jint R_style::TextAppearance_Material_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Inverse"
		);
	}
	jint R_style::TextAppearance_Material_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Large"
		);
	}
	jint R_style::TextAppearance_Material_Large_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Large_Inverse"
		);
	}
	jint R_style::TextAppearance_Material_Medium()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Medium"
		);
	}
	jint R_style::TextAppearance_Material_Medium_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Medium_Inverse"
		);
	}
	jint R_style::TextAppearance_Material_Menu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Menu"
		);
	}
	jint R_style::TextAppearance_Material_Notification()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Notification"
		);
	}
	jint R_style::TextAppearance_Material_Notification_Emphasis()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Notification_Emphasis"
		);
	}
	jint R_style::TextAppearance_Material_Notification_Info()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Notification_Info"
		);
	}
	jint R_style::TextAppearance_Material_Notification_Line2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Notification_Line2"
		);
	}
	jint R_style::TextAppearance_Material_Notification_Time()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Notification_Time"
		);
	}
	jint R_style::TextAppearance_Material_Notification_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Notification_Title"
		);
	}
	jint R_style::TextAppearance_Material_SearchResult_Subtitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_SearchResult_Subtitle"
		);
	}
	jint R_style::TextAppearance_Material_SearchResult_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_SearchResult_Title"
		);
	}
	jint R_style::TextAppearance_Material_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Small"
		);
	}
	jint R_style::TextAppearance_Material_Small_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Small_Inverse"
		);
	}
	jint R_style::TextAppearance_Material_Subhead()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Subhead"
		);
	}
	jint R_style::TextAppearance_Material_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Title"
		);
	}
	jint R_style::TextAppearance_Material_Widget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget"
		);
	}
	jint R_style::TextAppearance_Material_Widget_ActionBar_Menu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_ActionBar_Menu"
		);
	}
	jint R_style::TextAppearance_Material_Widget_ActionBar_Subtitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_ActionBar_Subtitle"
		);
	}
	jint R_style::TextAppearance_Material_Widget_ActionBar_Subtitle_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_ActionBar_Subtitle_Inverse"
		);
	}
	jint R_style::TextAppearance_Material_Widget_ActionBar_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_ActionBar_Title"
		);
	}
	jint R_style::TextAppearance_Material_Widget_ActionBar_Title_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_ActionBar_Title_Inverse"
		);
	}
	jint R_style::TextAppearance_Material_Widget_ActionMode_Subtitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_ActionMode_Subtitle"
		);
	}
	jint R_style::TextAppearance_Material_Widget_ActionMode_Subtitle_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_ActionMode_Subtitle_Inverse"
		);
	}
	jint R_style::TextAppearance_Material_Widget_ActionMode_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_ActionMode_Title"
		);
	}
	jint R_style::TextAppearance_Material_Widget_ActionMode_Title_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_ActionMode_Title_Inverse"
		);
	}
	jint R_style::TextAppearance_Material_Widget_Button()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_Button"
		);
	}
	jint R_style::TextAppearance_Material_Widget_Button_Borderless_Colored()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_Button_Borderless_Colored"
		);
	}
	jint R_style::TextAppearance_Material_Widget_Button_Colored()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_Button_Colored"
		);
	}
	jint R_style::TextAppearance_Material_Widget_Button_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_Button_Inverse"
		);
	}
	jint R_style::TextAppearance_Material_Widget_DropDownHint()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_DropDownHint"
		);
	}
	jint R_style::TextAppearance_Material_Widget_DropDownItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_DropDownItem"
		);
	}
	jint R_style::TextAppearance_Material_Widget_EditText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_EditText"
		);
	}
	jint R_style::TextAppearance_Material_Widget_IconMenu_Item()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_IconMenu_Item"
		);
	}
	jint R_style::TextAppearance_Material_Widget_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_PopupMenu"
		);
	}
	jint R_style::TextAppearance_Material_Widget_PopupMenu_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_PopupMenu_Large"
		);
	}
	jint R_style::TextAppearance_Material_Widget_PopupMenu_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_PopupMenu_Small"
		);
	}
	jint R_style::TextAppearance_Material_Widget_TabWidget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_TabWidget"
		);
	}
	jint R_style::TextAppearance_Material_Widget_TextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_TextView"
		);
	}
	jint R_style::TextAppearance_Material_Widget_TextView_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_TextView_PopupMenu"
		);
	}
	jint R_style::TextAppearance_Material_Widget_TextView_SpinnerItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_TextView_SpinnerItem"
		);
	}
	jint R_style::TextAppearance_Material_Widget_Toolbar_Subtitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_Toolbar_Subtitle"
		);
	}
	jint R_style::TextAppearance_Material_Widget_Toolbar_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_Widget_Toolbar_Title"
		);
	}
	jint R_style::TextAppearance_Material_WindowTitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Material_WindowTitle"
		);
	}
	jint R_style::TextAppearance_Medium()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Medium"
		);
	}
	jint R_style::TextAppearance_Medium_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Medium_Inverse"
		);
	}
	jint R_style::TextAppearance_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Small"
		);
	}
	jint R_style::TextAppearance_Small_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Small_Inverse"
		);
	}
	jint R_style::TextAppearance_StatusBar_EventContent()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_StatusBar_EventContent"
		);
	}
	jint R_style::TextAppearance_StatusBar_EventContent_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_StatusBar_EventContent_Title"
		);
	}
	jint R_style::TextAppearance_StatusBar_Icon()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_StatusBar_Icon"
		);
	}
	jint R_style::TextAppearance_StatusBar_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_StatusBar_Title"
		);
	}
	jint R_style::TextAppearance_SuggestionHighlight()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_SuggestionHighlight"
		);
	}
	jint R_style::TextAppearance_Theme()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Theme"
		);
	}
	jint R_style::TextAppearance_Theme_Dialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Theme_Dialog"
		);
	}
	jint R_style::TextAppearance_Widget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Widget"
		);
	}
	jint R_style::TextAppearance_Widget_Button()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Widget_Button"
		);
	}
	jint R_style::TextAppearance_Widget_DropDownHint()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Widget_DropDownHint"
		);
	}
	jint R_style::TextAppearance_Widget_DropDownItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Widget_DropDownItem"
		);
	}
	jint R_style::TextAppearance_Widget_EditText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Widget_EditText"
		);
	}
	jint R_style::TextAppearance_Widget_IconMenu_Item()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Widget_IconMenu_Item"
		);
	}
	jint R_style::TextAppearance_Widget_PopupMenu_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Widget_PopupMenu_Large"
		);
	}
	jint R_style::TextAppearance_Widget_PopupMenu_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Widget_PopupMenu_Small"
		);
	}
	jint R_style::TextAppearance_Widget_TabWidget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Widget_TabWidget"
		);
	}
	jint R_style::TextAppearance_Widget_TextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Widget_TextView"
		);
	}
	jint R_style::TextAppearance_Widget_TextView_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Widget_TextView_PopupMenu"
		);
	}
	jint R_style::TextAppearance_Widget_TextView_SpinnerItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_Widget_TextView_SpinnerItem"
		);
	}
	jint R_style::TextAppearance_WindowTitle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"TextAppearance_WindowTitle"
		);
	}
	jint R_style::Theme()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme"
		);
	}
	jint R_style::ThemeOverlay()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"ThemeOverlay"
		);
	}
	jint R_style::ThemeOverlay_DeviceDefault_Accent_DayNight()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"ThemeOverlay_DeviceDefault_Accent_DayNight"
		);
	}
	jint R_style::ThemeOverlay_Material()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"ThemeOverlay_Material"
		);
	}
	jint R_style::ThemeOverlay_Material_ActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"ThemeOverlay_Material_ActionBar"
		);
	}
	jint R_style::ThemeOverlay_Material_Dark()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"ThemeOverlay_Material_Dark"
		);
	}
	jint R_style::ThemeOverlay_Material_Dark_ActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"ThemeOverlay_Material_Dark_ActionBar"
		);
	}
	jint R_style::ThemeOverlay_Material_Dialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"ThemeOverlay_Material_Dialog"
		);
	}
	jint R_style::ThemeOverlay_Material_Dialog_Alert()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"ThemeOverlay_Material_Dialog_Alert"
		);
	}
	jint R_style::ThemeOverlay_Material_Light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"ThemeOverlay_Material_Light"
		);
	}
	jint R_style::Theme_Black()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Black"
		);
	}
	jint R_style::Theme_Black_NoTitleBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Black_NoTitleBar"
		);
	}
	jint R_style::Theme_Black_NoTitleBar_Fullscreen()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Black_NoTitleBar_Fullscreen"
		);
	}
	jint R_style::Theme_DeviceDefault()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault"
		);
	}
	jint R_style::Theme_DeviceDefault_DayNight()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_DayNight"
		);
	}
	jint R_style::Theme_DeviceDefault_Dialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Dialog"
		);
	}
	jint R_style::Theme_DeviceDefault_DialogWhenLarge()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_DialogWhenLarge"
		);
	}
	jint R_style::Theme_DeviceDefault_DialogWhenLarge_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_DialogWhenLarge_NoActionBar"
		);
	}
	jint R_style::Theme_DeviceDefault_Dialog_Alert()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Dialog_Alert"
		);
	}
	jint R_style::Theme_DeviceDefault_Dialog_MinWidth()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Dialog_MinWidth"
		);
	}
	jint R_style::Theme_DeviceDefault_Dialog_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Dialog_NoActionBar"
		);
	}
	jint R_style::Theme_DeviceDefault_Dialog_NoActionBar_MinWidth()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Dialog_NoActionBar_MinWidth"
		);
	}
	jint R_style::Theme_DeviceDefault_InputMethod()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_InputMethod"
		);
	}
	jint R_style::Theme_DeviceDefault_Light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Light"
		);
	}
	jint R_style::Theme_DeviceDefault_Light_DarkActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Light_DarkActionBar"
		);
	}
	jint R_style::Theme_DeviceDefault_Light_Dialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Light_Dialog"
		);
	}
	jint R_style::Theme_DeviceDefault_Light_DialogWhenLarge()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Light_DialogWhenLarge"
		);
	}
	jint R_style::Theme_DeviceDefault_Light_DialogWhenLarge_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Light_DialogWhenLarge_NoActionBar"
		);
	}
	jint R_style::Theme_DeviceDefault_Light_Dialog_Alert()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Light_Dialog_Alert"
		);
	}
	jint R_style::Theme_DeviceDefault_Light_Dialog_MinWidth()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Light_Dialog_MinWidth"
		);
	}
	jint R_style::Theme_DeviceDefault_Light_Dialog_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Light_Dialog_NoActionBar"
		);
	}
	jint R_style::Theme_DeviceDefault_Light_Dialog_NoActionBar_MinWidth()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Light_Dialog_NoActionBar_MinWidth"
		);
	}
	jint R_style::Theme_DeviceDefault_Light_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Light_NoActionBar"
		);
	}
	jint R_style::Theme_DeviceDefault_Light_NoActionBar_Fullscreen()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Light_NoActionBar_Fullscreen"
		);
	}
	jint R_style::Theme_DeviceDefault_Light_NoActionBar_Overscan()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Light_NoActionBar_Overscan"
		);
	}
	jint R_style::Theme_DeviceDefault_Light_NoActionBar_TranslucentDecor()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Light_NoActionBar_TranslucentDecor"
		);
	}
	jint R_style::Theme_DeviceDefault_Light_Panel()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Light_Panel"
		);
	}
	jint R_style::Theme_DeviceDefault_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_NoActionBar"
		);
	}
	jint R_style::Theme_DeviceDefault_NoActionBar_Fullscreen()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_NoActionBar_Fullscreen"
		);
	}
	jint R_style::Theme_DeviceDefault_NoActionBar_Overscan()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_NoActionBar_Overscan"
		);
	}
	jint R_style::Theme_DeviceDefault_NoActionBar_TranslucentDecor()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_NoActionBar_TranslucentDecor"
		);
	}
	jint R_style::Theme_DeviceDefault_Panel()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Panel"
		);
	}
	jint R_style::Theme_DeviceDefault_Settings()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Settings"
		);
	}
	jint R_style::Theme_DeviceDefault_Wallpaper()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Wallpaper"
		);
	}
	jint R_style::Theme_DeviceDefault_Wallpaper_NoTitleBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_DeviceDefault_Wallpaper_NoTitleBar"
		);
	}
	jint R_style::Theme_Dialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Dialog"
		);
	}
	jint R_style::Theme_Holo()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo"
		);
	}
	jint R_style::Theme_Holo_Dialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Dialog"
		);
	}
	jint R_style::Theme_Holo_DialogWhenLarge()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_DialogWhenLarge"
		);
	}
	jint R_style::Theme_Holo_DialogWhenLarge_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_DialogWhenLarge_NoActionBar"
		);
	}
	jint R_style::Theme_Holo_Dialog_MinWidth()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Dialog_MinWidth"
		);
	}
	jint R_style::Theme_Holo_Dialog_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Dialog_NoActionBar"
		);
	}
	jint R_style::Theme_Holo_Dialog_NoActionBar_MinWidth()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Dialog_NoActionBar_MinWidth"
		);
	}
	jint R_style::Theme_Holo_InputMethod()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_InputMethod"
		);
	}
	jint R_style::Theme_Holo_Light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Light"
		);
	}
	jint R_style::Theme_Holo_Light_DarkActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Light_DarkActionBar"
		);
	}
	jint R_style::Theme_Holo_Light_Dialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Light_Dialog"
		);
	}
	jint R_style::Theme_Holo_Light_DialogWhenLarge()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Light_DialogWhenLarge"
		);
	}
	jint R_style::Theme_Holo_Light_DialogWhenLarge_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Light_DialogWhenLarge_NoActionBar"
		);
	}
	jint R_style::Theme_Holo_Light_Dialog_MinWidth()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Light_Dialog_MinWidth"
		);
	}
	jint R_style::Theme_Holo_Light_Dialog_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Light_Dialog_NoActionBar"
		);
	}
	jint R_style::Theme_Holo_Light_Dialog_NoActionBar_MinWidth()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Light_Dialog_NoActionBar_MinWidth"
		);
	}
	jint R_style::Theme_Holo_Light_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Light_NoActionBar"
		);
	}
	jint R_style::Theme_Holo_Light_NoActionBar_Fullscreen()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Light_NoActionBar_Fullscreen"
		);
	}
	jint R_style::Theme_Holo_Light_NoActionBar_Overscan()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Light_NoActionBar_Overscan"
		);
	}
	jint R_style::Theme_Holo_Light_NoActionBar_TranslucentDecor()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Light_NoActionBar_TranslucentDecor"
		);
	}
	jint R_style::Theme_Holo_Light_Panel()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Light_Panel"
		);
	}
	jint R_style::Theme_Holo_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_NoActionBar"
		);
	}
	jint R_style::Theme_Holo_NoActionBar_Fullscreen()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_NoActionBar_Fullscreen"
		);
	}
	jint R_style::Theme_Holo_NoActionBar_Overscan()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_NoActionBar_Overscan"
		);
	}
	jint R_style::Theme_Holo_NoActionBar_TranslucentDecor()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_NoActionBar_TranslucentDecor"
		);
	}
	jint R_style::Theme_Holo_Panel()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Panel"
		);
	}
	jint R_style::Theme_Holo_Wallpaper()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Wallpaper"
		);
	}
	jint R_style::Theme_Holo_Wallpaper_NoTitleBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Holo_Wallpaper_NoTitleBar"
		);
	}
	jint R_style::Theme_InputMethod()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_InputMethod"
		);
	}
	jint R_style::Theme_Light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Light"
		);
	}
	jint R_style::Theme_Light_NoTitleBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Light_NoTitleBar"
		);
	}
	jint R_style::Theme_Light_NoTitleBar_Fullscreen()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Light_NoTitleBar_Fullscreen"
		);
	}
	jint R_style::Theme_Light_Panel()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Light_Panel"
		);
	}
	jint R_style::Theme_Light_WallpaperSettings()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Light_WallpaperSettings"
		);
	}
	jint R_style::Theme_Material()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material"
		);
	}
	jint R_style::Theme_Material_Dialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Dialog"
		);
	}
	jint R_style::Theme_Material_DialogWhenLarge()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_DialogWhenLarge"
		);
	}
	jint R_style::Theme_Material_DialogWhenLarge_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_DialogWhenLarge_NoActionBar"
		);
	}
	jint R_style::Theme_Material_Dialog_Alert()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Dialog_Alert"
		);
	}
	jint R_style::Theme_Material_Dialog_MinWidth()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Dialog_MinWidth"
		);
	}
	jint R_style::Theme_Material_Dialog_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Dialog_NoActionBar"
		);
	}
	jint R_style::Theme_Material_Dialog_NoActionBar_MinWidth()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Dialog_NoActionBar_MinWidth"
		);
	}
	jint R_style::Theme_Material_Dialog_Presentation()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Dialog_Presentation"
		);
	}
	jint R_style::Theme_Material_InputMethod()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_InputMethod"
		);
	}
	jint R_style::Theme_Material_Light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light"
		);
	}
	jint R_style::Theme_Material_Light_DarkActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_DarkActionBar"
		);
	}
	jint R_style::Theme_Material_Light_Dialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_Dialog"
		);
	}
	jint R_style::Theme_Material_Light_DialogWhenLarge()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_DialogWhenLarge"
		);
	}
	jint R_style::Theme_Material_Light_DialogWhenLarge_DarkActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_DialogWhenLarge_DarkActionBar"
		);
	}
	jint R_style::Theme_Material_Light_DialogWhenLarge_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_DialogWhenLarge_NoActionBar"
		);
	}
	jint R_style::Theme_Material_Light_Dialog_Alert()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_Dialog_Alert"
		);
	}
	jint R_style::Theme_Material_Light_Dialog_MinWidth()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_Dialog_MinWidth"
		);
	}
	jint R_style::Theme_Material_Light_Dialog_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_Dialog_NoActionBar"
		);
	}
	jint R_style::Theme_Material_Light_Dialog_NoActionBar_MinWidth()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_Dialog_NoActionBar_MinWidth"
		);
	}
	jint R_style::Theme_Material_Light_Dialog_Presentation()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_Dialog_Presentation"
		);
	}
	jint R_style::Theme_Material_Light_LightStatusBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_LightStatusBar"
		);
	}
	jint R_style::Theme_Material_Light_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_NoActionBar"
		);
	}
	jint R_style::Theme_Material_Light_NoActionBar_Fullscreen()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_NoActionBar_Fullscreen"
		);
	}
	jint R_style::Theme_Material_Light_NoActionBar_Overscan()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_NoActionBar_Overscan"
		);
	}
	jint R_style::Theme_Material_Light_NoActionBar_TranslucentDecor()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_NoActionBar_TranslucentDecor"
		);
	}
	jint R_style::Theme_Material_Light_Panel()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_Panel"
		);
	}
	jint R_style::Theme_Material_Light_Voice()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Light_Voice"
		);
	}
	jint R_style::Theme_Material_NoActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_NoActionBar"
		);
	}
	jint R_style::Theme_Material_NoActionBar_Fullscreen()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_NoActionBar_Fullscreen"
		);
	}
	jint R_style::Theme_Material_NoActionBar_Overscan()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_NoActionBar_Overscan"
		);
	}
	jint R_style::Theme_Material_NoActionBar_TranslucentDecor()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_NoActionBar_TranslucentDecor"
		);
	}
	jint R_style::Theme_Material_Panel()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Panel"
		);
	}
	jint R_style::Theme_Material_Settings()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Settings"
		);
	}
	jint R_style::Theme_Material_Voice()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Voice"
		);
	}
	jint R_style::Theme_Material_Wallpaper()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Wallpaper"
		);
	}
	jint R_style::Theme_Material_Wallpaper_NoTitleBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Material_Wallpaper_NoTitleBar"
		);
	}
	jint R_style::Theme_NoDisplay()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_NoDisplay"
		);
	}
	jint R_style::Theme_NoTitleBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_NoTitleBar"
		);
	}
	jint R_style::Theme_NoTitleBar_Fullscreen()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_NoTitleBar_Fullscreen"
		);
	}
	jint R_style::Theme_NoTitleBar_OverlayActionModes()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_NoTitleBar_OverlayActionModes"
		);
	}
	jint R_style::Theme_Panel()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Panel"
		);
	}
	jint R_style::Theme_Translucent()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Translucent"
		);
	}
	jint R_style::Theme_Translucent_NoTitleBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Translucent_NoTitleBar"
		);
	}
	jint R_style::Theme_Translucent_NoTitleBar_Fullscreen()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Translucent_NoTitleBar_Fullscreen"
		);
	}
	jint R_style::Theme_Wallpaper()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Wallpaper"
		);
	}
	jint R_style::Theme_WallpaperSettings()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_WallpaperSettings"
		);
	}
	jint R_style::Theme_Wallpaper_NoTitleBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Wallpaper_NoTitleBar"
		);
	}
	jint R_style::Theme_Wallpaper_NoTitleBar_Fullscreen()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_Wallpaper_NoTitleBar_Fullscreen"
		);
	}
	jint R_style::Theme_WithActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Theme_WithActionBar"
		);
	}
	jint R_style::Widget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget"
		);
	}
	jint R_style::Widget_AbsListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_AbsListView"
		);
	}
	jint R_style::Widget_ActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ActionBar"
		);
	}
	jint R_style::Widget_ActionBar_TabBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ActionBar_TabBar"
		);
	}
	jint R_style::Widget_ActionBar_TabText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ActionBar_TabText"
		);
	}
	jint R_style::Widget_ActionBar_TabView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ActionBar_TabView"
		);
	}
	jint R_style::Widget_ActionButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ActionButton"
		);
	}
	jint R_style::Widget_ActionButton_CloseMode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ActionButton_CloseMode"
		);
	}
	jint R_style::Widget_ActionButton_Overflow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ActionButton_Overflow"
		);
	}
	jint R_style::Widget_AutoCompleteTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_AutoCompleteTextView"
		);
	}
	jint R_style::Widget_Button()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Button"
		);
	}
	jint R_style::Widget_Button_Inset()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Button_Inset"
		);
	}
	jint R_style::Widget_Button_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Button_Small"
		);
	}
	jint R_style::Widget_Button_Toggle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Button_Toggle"
		);
	}
	jint R_style::Widget_CalendarView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_CalendarView"
		);
	}
	jint R_style::Widget_CompoundButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_CompoundButton"
		);
	}
	jint R_style::Widget_CompoundButton_CheckBox()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_CompoundButton_CheckBox"
		);
	}
	jint R_style::Widget_CompoundButton_RadioButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_CompoundButton_RadioButton"
		);
	}
	jint R_style::Widget_CompoundButton_Star()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_CompoundButton_Star"
		);
	}
	jint R_style::Widget_DatePicker()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DatePicker"
		);
	}
	jint R_style::Widget_DeviceDefault()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault"
		);
	}
	jint R_style::Widget_DeviceDefault_ActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ActionBar"
		);
	}
	jint R_style::Widget_DeviceDefault_ActionBar_Solid()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ActionBar_Solid"
		);
	}
	jint R_style::Widget_DeviceDefault_ActionBar_TabBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ActionBar_TabBar"
		);
	}
	jint R_style::Widget_DeviceDefault_ActionBar_TabText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ActionBar_TabText"
		);
	}
	jint R_style::Widget_DeviceDefault_ActionBar_TabView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ActionBar_TabView"
		);
	}
	jint R_style::Widget_DeviceDefault_ActionButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ActionButton"
		);
	}
	jint R_style::Widget_DeviceDefault_ActionButton_CloseMode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ActionButton_CloseMode"
		);
	}
	jint R_style::Widget_DeviceDefault_ActionButton_Overflow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ActionButton_Overflow"
		);
	}
	jint R_style::Widget_DeviceDefault_ActionButton_TextButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ActionButton_TextButton"
		);
	}
	jint R_style::Widget_DeviceDefault_ActionMode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ActionMode"
		);
	}
	jint R_style::Widget_DeviceDefault_AutoCompleteTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_AutoCompleteTextView"
		);
	}
	jint R_style::Widget_DeviceDefault_Button()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Button"
		);
	}
	jint R_style::Widget_DeviceDefault_Button_Borderless()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Button_Borderless"
		);
	}
	jint R_style::Widget_DeviceDefault_Button_Borderless_Colored()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Button_Borderless_Colored"
		);
	}
	jint R_style::Widget_DeviceDefault_Button_Borderless_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Button_Borderless_Small"
		);
	}
	jint R_style::Widget_DeviceDefault_Button_Colored()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Button_Colored"
		);
	}
	jint R_style::Widget_DeviceDefault_Button_Inset()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Button_Inset"
		);
	}
	jint R_style::Widget_DeviceDefault_Button_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Button_Small"
		);
	}
	jint R_style::Widget_DeviceDefault_Button_Toggle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Button_Toggle"
		);
	}
	jint R_style::Widget_DeviceDefault_CalendarView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_CalendarView"
		);
	}
	jint R_style::Widget_DeviceDefault_CheckedTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_CheckedTextView"
		);
	}
	jint R_style::Widget_DeviceDefault_CompoundButton_CheckBox()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_CompoundButton_CheckBox"
		);
	}
	jint R_style::Widget_DeviceDefault_CompoundButton_RadioButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_CompoundButton_RadioButton"
		);
	}
	jint R_style::Widget_DeviceDefault_CompoundButton_Star()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_CompoundButton_Star"
		);
	}
	jint R_style::Widget_DeviceDefault_DatePicker()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_DatePicker"
		);
	}
	jint R_style::Widget_DeviceDefault_DropDownItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_DropDownItem"
		);
	}
	jint R_style::Widget_DeviceDefault_DropDownItem_Spinner()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_DropDownItem_Spinner"
		);
	}
	jint R_style::Widget_DeviceDefault_EditText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_EditText"
		);
	}
	jint R_style::Widget_DeviceDefault_ExpandableListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ExpandableListView"
		);
	}
	jint R_style::Widget_DeviceDefault_FastScroll()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_FastScroll"
		);
	}
	jint R_style::Widget_DeviceDefault_GridView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_GridView"
		);
	}
	jint R_style::Widget_DeviceDefault_HorizontalScrollView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_HorizontalScrollView"
		);
	}
	jint R_style::Widget_DeviceDefault_ImageButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ImageButton"
		);
	}
	jint R_style::Widget_DeviceDefault_Light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ActionBar"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ActionBar_Solid()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ActionBar_Solid"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ActionBar_Solid_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ActionBar_Solid_Inverse"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ActionBar_TabBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ActionBar_TabBar"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ActionBar_TabBar_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ActionBar_TabBar_Inverse"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ActionBar_TabText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ActionBar_TabText"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ActionBar_TabText_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ActionBar_TabText_Inverse"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ActionBar_TabView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ActionBar_TabView"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ActionBar_TabView_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ActionBar_TabView_Inverse"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ActionButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ActionButton"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ActionButton_CloseMode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ActionButton_CloseMode"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ActionButton_Overflow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ActionButton_Overflow"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ActionMode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ActionMode"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ActionMode_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ActionMode_Inverse"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_AutoCompleteTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_AutoCompleteTextView"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_Button()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_Button"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_Button_Borderless_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_Button_Borderless_Small"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_Button_Inset()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_Button_Inset"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_Button_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_Button_Small"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_Button_Toggle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_Button_Toggle"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_CalendarView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_CalendarView"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_CheckedTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_CheckedTextView"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_CompoundButton_CheckBox()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_CompoundButton_CheckBox"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_CompoundButton_RadioButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_CompoundButton_RadioButton"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_CompoundButton_Star()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_CompoundButton_Star"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_DropDownItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_DropDownItem"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_DropDownItem_Spinner()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_DropDownItem_Spinner"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_EditText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_EditText"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ExpandableListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ExpandableListView"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_FastScroll()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_FastScroll"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_GridView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_GridView"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_HorizontalScrollView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_HorizontalScrollView"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ImageButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ImageButton"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ListPopupWindow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ListPopupWindow"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ListView"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ListView_DropDown()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ListView_DropDown"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_MediaRouteButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_MediaRouteButton"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_PopupMenu"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_PopupWindow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_PopupWindow"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ProgressBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ProgressBar"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ProgressBar_Horizontal()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ProgressBar_Horizontal"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ProgressBar_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ProgressBar_Inverse"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ProgressBar_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ProgressBar_Large"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ProgressBar_Large_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ProgressBar_Large_Inverse"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ProgressBar_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ProgressBar_Small"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ProgressBar_Small_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ProgressBar_Small_Inverse"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ProgressBar_Small_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ProgressBar_Small_Title"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_RatingBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_RatingBar"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_RatingBar_Indicator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_RatingBar_Indicator"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_RatingBar_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_RatingBar_Small"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_ScrollView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_ScrollView"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_SeekBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_SeekBar"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_Spinner()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_Spinner"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_StackView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_StackView"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_Tab()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_Tab"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_TabWidget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_TabWidget"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_TextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_TextView"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_TextView_SpinnerItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_TextView_SpinnerItem"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_WebTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_WebTextView"
		);
	}
	jint R_style::Widget_DeviceDefault_Light_WebView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Light_WebView"
		);
	}
	jint R_style::Widget_DeviceDefault_ListPopupWindow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ListPopupWindow"
		);
	}
	jint R_style::Widget_DeviceDefault_ListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ListView"
		);
	}
	jint R_style::Widget_DeviceDefault_ListView_DropDown()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ListView_DropDown"
		);
	}
	jint R_style::Widget_DeviceDefault_MediaRouteButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_MediaRouteButton"
		);
	}
	jint R_style::Widget_DeviceDefault_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_PopupMenu"
		);
	}
	jint R_style::Widget_DeviceDefault_PopupWindow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_PopupWindow"
		);
	}
	jint R_style::Widget_DeviceDefault_ProgressBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ProgressBar"
		);
	}
	jint R_style::Widget_DeviceDefault_ProgressBar_Horizontal()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ProgressBar_Horizontal"
		);
	}
	jint R_style::Widget_DeviceDefault_ProgressBar_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ProgressBar_Large"
		);
	}
	jint R_style::Widget_DeviceDefault_ProgressBar_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ProgressBar_Small"
		);
	}
	jint R_style::Widget_DeviceDefault_ProgressBar_Small_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ProgressBar_Small_Title"
		);
	}
	jint R_style::Widget_DeviceDefault_RatingBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_RatingBar"
		);
	}
	jint R_style::Widget_DeviceDefault_RatingBar_Indicator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_RatingBar_Indicator"
		);
	}
	jint R_style::Widget_DeviceDefault_RatingBar_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_RatingBar_Small"
		);
	}
	jint R_style::Widget_DeviceDefault_ScrollView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_ScrollView"
		);
	}
	jint R_style::Widget_DeviceDefault_SeekBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_SeekBar"
		);
	}
	jint R_style::Widget_DeviceDefault_Spinner()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Spinner"
		);
	}
	jint R_style::Widget_DeviceDefault_StackView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_StackView"
		);
	}
	jint R_style::Widget_DeviceDefault_Tab()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_Tab"
		);
	}
	jint R_style::Widget_DeviceDefault_TabWidget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_TabWidget"
		);
	}
	jint R_style::Widget_DeviceDefault_TextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_TextView"
		);
	}
	jint R_style::Widget_DeviceDefault_TextView_SpinnerItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_TextView_SpinnerItem"
		);
	}
	jint R_style::Widget_DeviceDefault_WebTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_WebTextView"
		);
	}
	jint R_style::Widget_DeviceDefault_WebView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DeviceDefault_WebView"
		);
	}
	jint R_style::Widget_DropDownItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DropDownItem"
		);
	}
	jint R_style::Widget_DropDownItem_Spinner()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_DropDownItem_Spinner"
		);
	}
	jint R_style::Widget_EditText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_EditText"
		);
	}
	jint R_style::Widget_ExpandableListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ExpandableListView"
		);
	}
	jint R_style::Widget_FastScroll()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_FastScroll"
		);
	}
	jint R_style::Widget_FragmentBreadCrumbs()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_FragmentBreadCrumbs"
		);
	}
	jint R_style::Widget_Gallery()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Gallery"
		);
	}
	jint R_style::Widget_GridView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_GridView"
		);
	}
	jint R_style::Widget_Holo()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo"
		);
	}
	jint R_style::Widget_Holo_ActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ActionBar"
		);
	}
	jint R_style::Widget_Holo_ActionBar_Solid()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ActionBar_Solid"
		);
	}
	jint R_style::Widget_Holo_ActionBar_TabBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ActionBar_TabBar"
		);
	}
	jint R_style::Widget_Holo_ActionBar_TabText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ActionBar_TabText"
		);
	}
	jint R_style::Widget_Holo_ActionBar_TabView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ActionBar_TabView"
		);
	}
	jint R_style::Widget_Holo_ActionButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ActionButton"
		);
	}
	jint R_style::Widget_Holo_ActionButton_CloseMode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ActionButton_CloseMode"
		);
	}
	jint R_style::Widget_Holo_ActionButton_Overflow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ActionButton_Overflow"
		);
	}
	jint R_style::Widget_Holo_ActionButton_TextButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ActionButton_TextButton"
		);
	}
	jint R_style::Widget_Holo_ActionMode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ActionMode"
		);
	}
	jint R_style::Widget_Holo_AutoCompleteTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_AutoCompleteTextView"
		);
	}
	jint R_style::Widget_Holo_Button()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Button"
		);
	}
	jint R_style::Widget_Holo_Button_Borderless()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Button_Borderless"
		);
	}
	jint R_style::Widget_Holo_Button_Borderless_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Button_Borderless_Small"
		);
	}
	jint R_style::Widget_Holo_Button_Inset()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Button_Inset"
		);
	}
	jint R_style::Widget_Holo_Button_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Button_Small"
		);
	}
	jint R_style::Widget_Holo_Button_Toggle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Button_Toggle"
		);
	}
	jint R_style::Widget_Holo_CalendarView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_CalendarView"
		);
	}
	jint R_style::Widget_Holo_CheckedTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_CheckedTextView"
		);
	}
	jint R_style::Widget_Holo_CompoundButton_CheckBox()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_CompoundButton_CheckBox"
		);
	}
	jint R_style::Widget_Holo_CompoundButton_RadioButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_CompoundButton_RadioButton"
		);
	}
	jint R_style::Widget_Holo_CompoundButton_Star()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_CompoundButton_Star"
		);
	}
	jint R_style::Widget_Holo_DatePicker()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_DatePicker"
		);
	}
	jint R_style::Widget_Holo_DropDownItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_DropDownItem"
		);
	}
	jint R_style::Widget_Holo_DropDownItem_Spinner()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_DropDownItem_Spinner"
		);
	}
	jint R_style::Widget_Holo_EditText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_EditText"
		);
	}
	jint R_style::Widget_Holo_ExpandableListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ExpandableListView"
		);
	}
	jint R_style::Widget_Holo_GridView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_GridView"
		);
	}
	jint R_style::Widget_Holo_HorizontalScrollView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_HorizontalScrollView"
		);
	}
	jint R_style::Widget_Holo_ImageButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ImageButton"
		);
	}
	jint R_style::Widget_Holo_Light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light"
		);
	}
	jint R_style::Widget_Holo_Light_ActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ActionBar"
		);
	}
	jint R_style::Widget_Holo_Light_ActionBar_Solid()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ActionBar_Solid"
		);
	}
	jint R_style::Widget_Holo_Light_ActionBar_Solid_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ActionBar_Solid_Inverse"
		);
	}
	jint R_style::Widget_Holo_Light_ActionBar_TabBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ActionBar_TabBar"
		);
	}
	jint R_style::Widget_Holo_Light_ActionBar_TabBar_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ActionBar_TabBar_Inverse"
		);
	}
	jint R_style::Widget_Holo_Light_ActionBar_TabText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ActionBar_TabText"
		);
	}
	jint R_style::Widget_Holo_Light_ActionBar_TabText_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ActionBar_TabText_Inverse"
		);
	}
	jint R_style::Widget_Holo_Light_ActionBar_TabView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ActionBar_TabView"
		);
	}
	jint R_style::Widget_Holo_Light_ActionBar_TabView_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ActionBar_TabView_Inverse"
		);
	}
	jint R_style::Widget_Holo_Light_ActionButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ActionButton"
		);
	}
	jint R_style::Widget_Holo_Light_ActionButton_CloseMode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ActionButton_CloseMode"
		);
	}
	jint R_style::Widget_Holo_Light_ActionButton_Overflow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ActionButton_Overflow"
		);
	}
	jint R_style::Widget_Holo_Light_ActionMode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ActionMode"
		);
	}
	jint R_style::Widget_Holo_Light_ActionMode_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ActionMode_Inverse"
		);
	}
	jint R_style::Widget_Holo_Light_AutoCompleteTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_AutoCompleteTextView"
		);
	}
	jint R_style::Widget_Holo_Light_Button()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_Button"
		);
	}
	jint R_style::Widget_Holo_Light_Button_Borderless_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_Button_Borderless_Small"
		);
	}
	jint R_style::Widget_Holo_Light_Button_Inset()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_Button_Inset"
		);
	}
	jint R_style::Widget_Holo_Light_Button_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_Button_Small"
		);
	}
	jint R_style::Widget_Holo_Light_Button_Toggle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_Button_Toggle"
		);
	}
	jint R_style::Widget_Holo_Light_CalendarView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_CalendarView"
		);
	}
	jint R_style::Widget_Holo_Light_CheckedTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_CheckedTextView"
		);
	}
	jint R_style::Widget_Holo_Light_CompoundButton_CheckBox()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_CompoundButton_CheckBox"
		);
	}
	jint R_style::Widget_Holo_Light_CompoundButton_RadioButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_CompoundButton_RadioButton"
		);
	}
	jint R_style::Widget_Holo_Light_CompoundButton_Star()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_CompoundButton_Star"
		);
	}
	jint R_style::Widget_Holo_Light_DropDownItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_DropDownItem"
		);
	}
	jint R_style::Widget_Holo_Light_DropDownItem_Spinner()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_DropDownItem_Spinner"
		);
	}
	jint R_style::Widget_Holo_Light_EditText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_EditText"
		);
	}
	jint R_style::Widget_Holo_Light_ExpandableListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ExpandableListView"
		);
	}
	jint R_style::Widget_Holo_Light_GridView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_GridView"
		);
	}
	jint R_style::Widget_Holo_Light_HorizontalScrollView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_HorizontalScrollView"
		);
	}
	jint R_style::Widget_Holo_Light_ImageButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ImageButton"
		);
	}
	jint R_style::Widget_Holo_Light_ListPopupWindow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ListPopupWindow"
		);
	}
	jint R_style::Widget_Holo_Light_ListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ListView"
		);
	}
	jint R_style::Widget_Holo_Light_ListView_DropDown()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ListView_DropDown"
		);
	}
	jint R_style::Widget_Holo_Light_MediaRouteButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_MediaRouteButton"
		);
	}
	jint R_style::Widget_Holo_Light_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_PopupMenu"
		);
	}
	jint R_style::Widget_Holo_Light_PopupWindow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_PopupWindow"
		);
	}
	jint R_style::Widget_Holo_Light_ProgressBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ProgressBar"
		);
	}
	jint R_style::Widget_Holo_Light_ProgressBar_Horizontal()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ProgressBar_Horizontal"
		);
	}
	jint R_style::Widget_Holo_Light_ProgressBar_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ProgressBar_Inverse"
		);
	}
	jint R_style::Widget_Holo_Light_ProgressBar_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ProgressBar_Large"
		);
	}
	jint R_style::Widget_Holo_Light_ProgressBar_Large_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ProgressBar_Large_Inverse"
		);
	}
	jint R_style::Widget_Holo_Light_ProgressBar_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ProgressBar_Small"
		);
	}
	jint R_style::Widget_Holo_Light_ProgressBar_Small_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ProgressBar_Small_Inverse"
		);
	}
	jint R_style::Widget_Holo_Light_ProgressBar_Small_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ProgressBar_Small_Title"
		);
	}
	jint R_style::Widget_Holo_Light_RatingBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_RatingBar"
		);
	}
	jint R_style::Widget_Holo_Light_RatingBar_Indicator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_RatingBar_Indicator"
		);
	}
	jint R_style::Widget_Holo_Light_RatingBar_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_RatingBar_Small"
		);
	}
	jint R_style::Widget_Holo_Light_ScrollView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_ScrollView"
		);
	}
	jint R_style::Widget_Holo_Light_SeekBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_SeekBar"
		);
	}
	jint R_style::Widget_Holo_Light_Spinner()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_Spinner"
		);
	}
	jint R_style::Widget_Holo_Light_Tab()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_Tab"
		);
	}
	jint R_style::Widget_Holo_Light_TabWidget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_TabWidget"
		);
	}
	jint R_style::Widget_Holo_Light_TextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_TextView"
		);
	}
	jint R_style::Widget_Holo_Light_TextView_SpinnerItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_TextView_SpinnerItem"
		);
	}
	jint R_style::Widget_Holo_Light_WebTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_WebTextView"
		);
	}
	jint R_style::Widget_Holo_Light_WebView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Light_WebView"
		);
	}
	jint R_style::Widget_Holo_ListPopupWindow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ListPopupWindow"
		);
	}
	jint R_style::Widget_Holo_ListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ListView"
		);
	}
	jint R_style::Widget_Holo_ListView_DropDown()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ListView_DropDown"
		);
	}
	jint R_style::Widget_Holo_MediaRouteButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_MediaRouteButton"
		);
	}
	jint R_style::Widget_Holo_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_PopupMenu"
		);
	}
	jint R_style::Widget_Holo_PopupWindow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_PopupWindow"
		);
	}
	jint R_style::Widget_Holo_ProgressBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ProgressBar"
		);
	}
	jint R_style::Widget_Holo_ProgressBar_Horizontal()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ProgressBar_Horizontal"
		);
	}
	jint R_style::Widget_Holo_ProgressBar_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ProgressBar_Large"
		);
	}
	jint R_style::Widget_Holo_ProgressBar_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ProgressBar_Small"
		);
	}
	jint R_style::Widget_Holo_ProgressBar_Small_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ProgressBar_Small_Title"
		);
	}
	jint R_style::Widget_Holo_RatingBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_RatingBar"
		);
	}
	jint R_style::Widget_Holo_RatingBar_Indicator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_RatingBar_Indicator"
		);
	}
	jint R_style::Widget_Holo_RatingBar_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_RatingBar_Small"
		);
	}
	jint R_style::Widget_Holo_ScrollView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_ScrollView"
		);
	}
	jint R_style::Widget_Holo_SeekBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_SeekBar"
		);
	}
	jint R_style::Widget_Holo_Spinner()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Spinner"
		);
	}
	jint R_style::Widget_Holo_Tab()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_Tab"
		);
	}
	jint R_style::Widget_Holo_TabWidget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_TabWidget"
		);
	}
	jint R_style::Widget_Holo_TextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_TextView"
		);
	}
	jint R_style::Widget_Holo_TextView_SpinnerItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_TextView_SpinnerItem"
		);
	}
	jint R_style::Widget_Holo_WebTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_WebTextView"
		);
	}
	jint R_style::Widget_Holo_WebView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Holo_WebView"
		);
	}
	jint R_style::Widget_ImageButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ImageButton"
		);
	}
	jint R_style::Widget_ImageWell()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ImageWell"
		);
	}
	jint R_style::Widget_KeyboardView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_KeyboardView"
		);
	}
	jint R_style::Widget_ListPopupWindow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ListPopupWindow"
		);
	}
	jint R_style::Widget_ListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ListView"
		);
	}
	jint R_style::Widget_ListView_DropDown()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ListView_DropDown"
		);
	}
	jint R_style::Widget_ListView_Menu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ListView_Menu"
		);
	}
	jint R_style::Widget_ListView_White()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ListView_White"
		);
	}
	jint R_style::Widget_Material()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material"
		);
	}
	jint R_style::Widget_Material_ActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ActionBar"
		);
	}
	jint R_style::Widget_Material_ActionBar_Solid()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ActionBar_Solid"
		);
	}
	jint R_style::Widget_Material_ActionBar_TabBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ActionBar_TabBar"
		);
	}
	jint R_style::Widget_Material_ActionBar_TabText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ActionBar_TabText"
		);
	}
	jint R_style::Widget_Material_ActionBar_TabView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ActionBar_TabView"
		);
	}
	jint R_style::Widget_Material_ActionButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ActionButton"
		);
	}
	jint R_style::Widget_Material_ActionButton_CloseMode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ActionButton_CloseMode"
		);
	}
	jint R_style::Widget_Material_ActionButton_Overflow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ActionButton_Overflow"
		);
	}
	jint R_style::Widget_Material_ActionMode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ActionMode"
		);
	}
	jint R_style::Widget_Material_AutoCompleteTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_AutoCompleteTextView"
		);
	}
	jint R_style::Widget_Material_Button()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Button"
		);
	}
	jint R_style::Widget_Material_ButtonBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ButtonBar"
		);
	}
	jint R_style::Widget_Material_ButtonBar_AlertDialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ButtonBar_AlertDialog"
		);
	}
	jint R_style::Widget_Material_Button_Borderless()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Button_Borderless"
		);
	}
	jint R_style::Widget_Material_Button_Borderless_Colored()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Button_Borderless_Colored"
		);
	}
	jint R_style::Widget_Material_Button_Borderless_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Button_Borderless_Small"
		);
	}
	jint R_style::Widget_Material_Button_Colored()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Button_Colored"
		);
	}
	jint R_style::Widget_Material_Button_Inset()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Button_Inset"
		);
	}
	jint R_style::Widget_Material_Button_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Button_Small"
		);
	}
	jint R_style::Widget_Material_Button_Toggle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Button_Toggle"
		);
	}
	jint R_style::Widget_Material_CalendarView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_CalendarView"
		);
	}
	jint R_style::Widget_Material_CheckedTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_CheckedTextView"
		);
	}
	jint R_style::Widget_Material_CompoundButton_CheckBox()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_CompoundButton_CheckBox"
		);
	}
	jint R_style::Widget_Material_CompoundButton_RadioButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_CompoundButton_RadioButton"
		);
	}
	jint R_style::Widget_Material_CompoundButton_Star()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_CompoundButton_Star"
		);
	}
	jint R_style::Widget_Material_CompoundButton_Switch()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_CompoundButton_Switch"
		);
	}
	jint R_style::Widget_Material_DatePicker()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_DatePicker"
		);
	}
	jint R_style::Widget_Material_DropDownItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_DropDownItem"
		);
	}
	jint R_style::Widget_Material_DropDownItem_Spinner()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_DropDownItem_Spinner"
		);
	}
	jint R_style::Widget_Material_EditText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_EditText"
		);
	}
	jint R_style::Widget_Material_ExpandableListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ExpandableListView"
		);
	}
	jint R_style::Widget_Material_FastScroll()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_FastScroll"
		);
	}
	jint R_style::Widget_Material_GridView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_GridView"
		);
	}
	jint R_style::Widget_Material_HorizontalScrollView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_HorizontalScrollView"
		);
	}
	jint R_style::Widget_Material_ImageButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ImageButton"
		);
	}
	jint R_style::Widget_Material_Light()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light"
		);
	}
	jint R_style::Widget_Material_Light_ActionBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ActionBar"
		);
	}
	jint R_style::Widget_Material_Light_ActionBar_Solid()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ActionBar_Solid"
		);
	}
	jint R_style::Widget_Material_Light_ActionBar_TabBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ActionBar_TabBar"
		);
	}
	jint R_style::Widget_Material_Light_ActionBar_TabText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ActionBar_TabText"
		);
	}
	jint R_style::Widget_Material_Light_ActionBar_TabView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ActionBar_TabView"
		);
	}
	jint R_style::Widget_Material_Light_ActionButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ActionButton"
		);
	}
	jint R_style::Widget_Material_Light_ActionButton_CloseMode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ActionButton_CloseMode"
		);
	}
	jint R_style::Widget_Material_Light_ActionButton_Overflow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ActionButton_Overflow"
		);
	}
	jint R_style::Widget_Material_Light_ActionMode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ActionMode"
		);
	}
	jint R_style::Widget_Material_Light_AutoCompleteTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_AutoCompleteTextView"
		);
	}
	jint R_style::Widget_Material_Light_Button()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_Button"
		);
	}
	jint R_style::Widget_Material_Light_ButtonBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ButtonBar"
		);
	}
	jint R_style::Widget_Material_Light_ButtonBar_AlertDialog()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ButtonBar_AlertDialog"
		);
	}
	jint R_style::Widget_Material_Light_Button_Borderless()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_Button_Borderless"
		);
	}
	jint R_style::Widget_Material_Light_Button_Borderless_Colored()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_Button_Borderless_Colored"
		);
	}
	jint R_style::Widget_Material_Light_Button_Borderless_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_Button_Borderless_Small"
		);
	}
	jint R_style::Widget_Material_Light_Button_Inset()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_Button_Inset"
		);
	}
	jint R_style::Widget_Material_Light_Button_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_Button_Small"
		);
	}
	jint R_style::Widget_Material_Light_Button_Toggle()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_Button_Toggle"
		);
	}
	jint R_style::Widget_Material_Light_CalendarView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_CalendarView"
		);
	}
	jint R_style::Widget_Material_Light_CheckedTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_CheckedTextView"
		);
	}
	jint R_style::Widget_Material_Light_CompoundButton_CheckBox()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_CompoundButton_CheckBox"
		);
	}
	jint R_style::Widget_Material_Light_CompoundButton_RadioButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_CompoundButton_RadioButton"
		);
	}
	jint R_style::Widget_Material_Light_CompoundButton_Star()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_CompoundButton_Star"
		);
	}
	jint R_style::Widget_Material_Light_CompoundButton_Switch()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_CompoundButton_Switch"
		);
	}
	jint R_style::Widget_Material_Light_DatePicker()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_DatePicker"
		);
	}
	jint R_style::Widget_Material_Light_DropDownItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_DropDownItem"
		);
	}
	jint R_style::Widget_Material_Light_DropDownItem_Spinner()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_DropDownItem_Spinner"
		);
	}
	jint R_style::Widget_Material_Light_EditText()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_EditText"
		);
	}
	jint R_style::Widget_Material_Light_ExpandableListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ExpandableListView"
		);
	}
	jint R_style::Widget_Material_Light_FastScroll()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_FastScroll"
		);
	}
	jint R_style::Widget_Material_Light_GridView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_GridView"
		);
	}
	jint R_style::Widget_Material_Light_HorizontalScrollView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_HorizontalScrollView"
		);
	}
	jint R_style::Widget_Material_Light_ImageButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ImageButton"
		);
	}
	jint R_style::Widget_Material_Light_ListPopupWindow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ListPopupWindow"
		);
	}
	jint R_style::Widget_Material_Light_ListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ListView"
		);
	}
	jint R_style::Widget_Material_Light_ListView_DropDown()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ListView_DropDown"
		);
	}
	jint R_style::Widget_Material_Light_MediaRouteButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_MediaRouteButton"
		);
	}
	jint R_style::Widget_Material_Light_NumberPicker()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_NumberPicker"
		);
	}
	jint R_style::Widget_Material_Light_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_PopupMenu"
		);
	}
	jint R_style::Widget_Material_Light_PopupMenu_Overflow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_PopupMenu_Overflow"
		);
	}
	jint R_style::Widget_Material_Light_PopupWindow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_PopupWindow"
		);
	}
	jint R_style::Widget_Material_Light_ProgressBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ProgressBar"
		);
	}
	jint R_style::Widget_Material_Light_ProgressBar_Horizontal()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ProgressBar_Horizontal"
		);
	}
	jint R_style::Widget_Material_Light_ProgressBar_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ProgressBar_Inverse"
		);
	}
	jint R_style::Widget_Material_Light_ProgressBar_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ProgressBar_Large"
		);
	}
	jint R_style::Widget_Material_Light_ProgressBar_Large_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ProgressBar_Large_Inverse"
		);
	}
	jint R_style::Widget_Material_Light_ProgressBar_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ProgressBar_Small"
		);
	}
	jint R_style::Widget_Material_Light_ProgressBar_Small_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ProgressBar_Small_Inverse"
		);
	}
	jint R_style::Widget_Material_Light_ProgressBar_Small_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ProgressBar_Small_Title"
		);
	}
	jint R_style::Widget_Material_Light_RatingBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_RatingBar"
		);
	}
	jint R_style::Widget_Material_Light_RatingBar_Indicator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_RatingBar_Indicator"
		);
	}
	jint R_style::Widget_Material_Light_RatingBar_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_RatingBar_Small"
		);
	}
	jint R_style::Widget_Material_Light_ScrollView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_ScrollView"
		);
	}
	jint R_style::Widget_Material_Light_SearchView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_SearchView"
		);
	}
	jint R_style::Widget_Material_Light_SeekBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_SeekBar"
		);
	}
	jint R_style::Widget_Material_Light_SegmentedButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_SegmentedButton"
		);
	}
	jint R_style::Widget_Material_Light_Spinner()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_Spinner"
		);
	}
	jint R_style::Widget_Material_Light_Spinner_Underlined()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_Spinner_Underlined"
		);
	}
	jint R_style::Widget_Material_Light_StackView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_StackView"
		);
	}
	jint R_style::Widget_Material_Light_Tab()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_Tab"
		);
	}
	jint R_style::Widget_Material_Light_TabWidget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_TabWidget"
		);
	}
	jint R_style::Widget_Material_Light_TextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_TextView"
		);
	}
	jint R_style::Widget_Material_Light_TextView_SpinnerItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_TextView_SpinnerItem"
		);
	}
	jint R_style::Widget_Material_Light_TimePicker()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_TimePicker"
		);
	}
	jint R_style::Widget_Material_Light_WebTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_WebTextView"
		);
	}
	jint R_style::Widget_Material_Light_WebView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Light_WebView"
		);
	}
	jint R_style::Widget_Material_ListPopupWindow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ListPopupWindow"
		);
	}
	jint R_style::Widget_Material_ListView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ListView"
		);
	}
	jint R_style::Widget_Material_ListView_DropDown()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ListView_DropDown"
		);
	}
	jint R_style::Widget_Material_MediaRouteButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_MediaRouteButton"
		);
	}
	jint R_style::Widget_Material_NumberPicker()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_NumberPicker"
		);
	}
	jint R_style::Widget_Material_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_PopupMenu"
		);
	}
	jint R_style::Widget_Material_PopupMenu_Overflow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_PopupMenu_Overflow"
		);
	}
	jint R_style::Widget_Material_PopupWindow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_PopupWindow"
		);
	}
	jint R_style::Widget_Material_ProgressBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ProgressBar"
		);
	}
	jint R_style::Widget_Material_ProgressBar_Horizontal()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ProgressBar_Horizontal"
		);
	}
	jint R_style::Widget_Material_ProgressBar_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ProgressBar_Large"
		);
	}
	jint R_style::Widget_Material_ProgressBar_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ProgressBar_Small"
		);
	}
	jint R_style::Widget_Material_ProgressBar_Small_Title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ProgressBar_Small_Title"
		);
	}
	jint R_style::Widget_Material_RatingBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_RatingBar"
		);
	}
	jint R_style::Widget_Material_RatingBar_Indicator()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_RatingBar_Indicator"
		);
	}
	jint R_style::Widget_Material_RatingBar_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_RatingBar_Small"
		);
	}
	jint R_style::Widget_Material_ScrollView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_ScrollView"
		);
	}
	jint R_style::Widget_Material_SearchView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_SearchView"
		);
	}
	jint R_style::Widget_Material_SeekBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_SeekBar"
		);
	}
	jint R_style::Widget_Material_SeekBar_Discrete()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_SeekBar_Discrete"
		);
	}
	jint R_style::Widget_Material_SegmentedButton()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_SegmentedButton"
		);
	}
	jint R_style::Widget_Material_Spinner()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Spinner"
		);
	}
	jint R_style::Widget_Material_Spinner_Underlined()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Spinner_Underlined"
		);
	}
	jint R_style::Widget_Material_StackView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_StackView"
		);
	}
	jint R_style::Widget_Material_Tab()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Tab"
		);
	}
	jint R_style::Widget_Material_TabWidget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_TabWidget"
		);
	}
	jint R_style::Widget_Material_TextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_TextView"
		);
	}
	jint R_style::Widget_Material_TextView_SpinnerItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_TextView_SpinnerItem"
		);
	}
	jint R_style::Widget_Material_TimePicker()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_TimePicker"
		);
	}
	jint R_style::Widget_Material_Toolbar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Toolbar"
		);
	}
	jint R_style::Widget_Material_Toolbar_Button_Navigation()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_Toolbar_Button_Navigation"
		);
	}
	jint R_style::Widget_Material_WebTextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_WebTextView"
		);
	}
	jint R_style::Widget_Material_WebView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Material_WebView"
		);
	}
	jint R_style::Widget_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_PopupMenu"
		);
	}
	jint R_style::Widget_PopupWindow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_PopupWindow"
		);
	}
	jint R_style::Widget_ProgressBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ProgressBar"
		);
	}
	jint R_style::Widget_ProgressBar_Horizontal()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ProgressBar_Horizontal"
		);
	}
	jint R_style::Widget_ProgressBar_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ProgressBar_Inverse"
		);
	}
	jint R_style::Widget_ProgressBar_Large()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ProgressBar_Large"
		);
	}
	jint R_style::Widget_ProgressBar_Large_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ProgressBar_Large_Inverse"
		);
	}
	jint R_style::Widget_ProgressBar_Small()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ProgressBar_Small"
		);
	}
	jint R_style::Widget_ProgressBar_Small_Inverse()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ProgressBar_Small_Inverse"
		);
	}
	jint R_style::Widget_RatingBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_RatingBar"
		);
	}
	jint R_style::Widget_ScrollView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_ScrollView"
		);
	}
	jint R_style::Widget_SeekBar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_SeekBar"
		);
	}
	jint R_style::Widget_Spinner()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Spinner"
		);
	}
	jint R_style::Widget_Spinner_DropDown()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Spinner_DropDown"
		);
	}
	jint R_style::Widget_StackView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_StackView"
		);
	}
	jint R_style::Widget_TabWidget()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_TabWidget"
		);
	}
	jint R_style::Widget_TextView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_TextView"
		);
	}
	jint R_style::Widget_TextView_PopupMenu()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_TextView_PopupMenu"
		);
	}
	jint R_style::Widget_TextView_SpinnerItem()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_TextView_SpinnerItem"
		);
	}
	jint R_style::Widget_Toolbar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Toolbar"
		);
	}
	jint R_style::Widget_Toolbar_Button_Navigation()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_Toolbar_Button_Navigation"
		);
	}
	jint R_style::Widget_WebView()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$style",
			"Widget_WebView"
		);
	}
	
	// QAndroidJniObject forward
	R_style::R_style(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_style::R_style()
		: __JniBaseClass(
			"android.R$style",
			"()V"
		) {}
	
	// Methods
} // namespace android

