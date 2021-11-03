#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Bitmap_Config : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Bitmap_Config ALPHA_8();
		static android::graphics::Bitmap_Config ARGB_4444();
		static android::graphics::Bitmap_Config ARGB_8888();
		static android::graphics::Bitmap_Config HARDWARE();
		static android::graphics::Bitmap_Config RGBA_F16();
		static android::graphics::Bitmap_Config RGB_565();
		
		// QJniObject forward
		template<typename ...Ts> explicit Bitmap_Config(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Bitmap_Config(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Bitmap_Config valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

