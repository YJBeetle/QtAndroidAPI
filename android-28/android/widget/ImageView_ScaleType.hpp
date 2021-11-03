#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::widget
{
	class ImageView_ScaleType : public java::lang::Enum
	{
	public:
		// Fields
		static android::widget::ImageView_ScaleType CENTER();
		static android::widget::ImageView_ScaleType CENTER_CROP();
		static android::widget::ImageView_ScaleType CENTER_INSIDE();
		static android::widget::ImageView_ScaleType FIT_CENTER();
		static android::widget::ImageView_ScaleType FIT_END();
		static android::widget::ImageView_ScaleType FIT_START();
		static android::widget::ImageView_ScaleType FIT_XY();
		static android::widget::ImageView_ScaleType MATRIX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageView_ScaleType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ImageView_ScaleType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::widget::ImageView_ScaleType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::widget

