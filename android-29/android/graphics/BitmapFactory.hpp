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
		
		BitmapFactory(QAndroidJniObject obj);
		// Constructors
		BitmapFactory();
		
		// Methods
		static QAndroidJniObject decodeByteArray(jbyteArray arg0, jint arg1, jint arg2);
		static QAndroidJniObject decodeByteArray(jbyteArray arg0, jint arg1, jint arg2, android::graphics::BitmapFactory_Options arg3);
		static QAndroidJniObject decodeFile(jstring arg0);
		static QAndroidJniObject decodeFile(const QString &arg0);
		static QAndroidJniObject decodeFile(jstring arg0, android::graphics::BitmapFactory_Options arg1);
		static QAndroidJniObject decodeFile(const QString &arg0, android::graphics::BitmapFactory_Options arg1);
		static QAndroidJniObject decodeFileDescriptor(java::io::FileDescriptor arg0);
		static QAndroidJniObject decodeFileDescriptor(java::io::FileDescriptor arg0, android::graphics::Rect arg1, android::graphics::BitmapFactory_Options arg2);
		static QAndroidJniObject decodeResource(android::content::res::Resources arg0, jint arg1);
		static QAndroidJniObject decodeResource(android::content::res::Resources arg0, jint arg1, android::graphics::BitmapFactory_Options arg2);
		static QAndroidJniObject decodeResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, android::graphics::Rect arg3, android::graphics::BitmapFactory_Options arg4);
		static QAndroidJniObject decodeStream(java::io::InputStream arg0);
		static QAndroidJniObject decodeStream(java::io::InputStream arg0, android::graphics::Rect arg1, android::graphics::BitmapFactory_Options arg2);
	};
} // namespace android::graphics

