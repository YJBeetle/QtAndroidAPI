#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class BitmapFactory_Options;
}
namespace android::graphics
{
	class Rect;
}
namespace android::util
{
	class TypedValue;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class InputStream;
}

namespace android::graphics
{
	class BitmapFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BitmapFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BitmapFactory(QAndroidJniObject obj);
		
		// Constructors
		BitmapFactory();
		
		// Methods
		static android::graphics::Bitmap decodeByteArray(jbyteArray arg0, jint arg1, jint arg2);
		static android::graphics::Bitmap decodeByteArray(jbyteArray arg0, jint arg1, jint arg2, android::graphics::BitmapFactory_Options arg3);
		static android::graphics::Bitmap decodeFile(jstring arg0);
		static android::graphics::Bitmap decodeFile(jstring arg0, android::graphics::BitmapFactory_Options arg1);
		static android::graphics::Bitmap decodeFileDescriptor(java::io::FileDescriptor arg0);
		static android::graphics::Bitmap decodeFileDescriptor(java::io::FileDescriptor arg0, android::graphics::Rect arg1, android::graphics::BitmapFactory_Options arg2);
		static android::graphics::Bitmap decodeResource(android::content::res::Resources arg0, jint arg1);
		static android::graphics::Bitmap decodeResource(android::content::res::Resources arg0, jint arg1, android::graphics::BitmapFactory_Options arg2);
		static android::graphics::Bitmap decodeResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, android::graphics::Rect arg3, android::graphics::BitmapFactory_Options arg4);
		static android::graphics::Bitmap decodeStream(java::io::InputStream arg0);
		static android::graphics::Bitmap decodeStream(java::io::InputStream arg0, android::graphics::Rect arg1, android::graphics::BitmapFactory_Options arg2);
	};
} // namespace android::graphics

