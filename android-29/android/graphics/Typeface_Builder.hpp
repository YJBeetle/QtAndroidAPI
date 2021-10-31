#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::res
{
	class AssetManager;
}
namespace android::graphics
{
	class Typeface;
}
namespace java::io
{
	class File;
}
namespace java::io
{
	class FileDescriptor;
}

namespace android::graphics
{
	class Typeface_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		Typeface_Builder(QAndroidJniObject obj);
		// Constructors
		Typeface_Builder(java::io::File arg0);
		Typeface_Builder(java::io::FileDescriptor arg0);
		Typeface_Builder(jstring arg0);
		Typeface_Builder(android::content::res::AssetManager arg0, jstring arg1);
		Typeface_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setFallback(jstring arg0);
		QAndroidJniObject setFontVariationSettings(jarray arg0);
		QAndroidJniObject setFontVariationSettings(jstring arg0);
		QAndroidJniObject setItalic(jboolean arg0);
		QAndroidJniObject setTtcIndex(jint arg0);
		QAndroidJniObject setWeight(jint arg0);
	};
} // namespace android::graphics

