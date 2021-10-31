#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Bitmap_CompressFormat : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject JPEG();
		static QAndroidJniObject PNG();
		static QAndroidJniObject WEBP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Bitmap_CompressFormat(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Bitmap_CompressFormat(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

