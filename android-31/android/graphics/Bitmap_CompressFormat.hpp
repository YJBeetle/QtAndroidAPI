#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Bitmap_CompressFormat : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Bitmap_CompressFormat JPEG();
		static android::graphics::Bitmap_CompressFormat PNG();
		static android::graphics::Bitmap_CompressFormat WEBP();
		static android::graphics::Bitmap_CompressFormat WEBP_LOSSLESS();
		static android::graphics::Bitmap_CompressFormat WEBP_LOSSY();
		
		// QJniObject forward
		template<typename ...Ts> explicit Bitmap_CompressFormat(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Bitmap_CompressFormat(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Bitmap_CompressFormat valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

