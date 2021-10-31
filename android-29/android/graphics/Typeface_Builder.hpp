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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Typeface_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Typeface_Builder(QAndroidJniObject obj);
		
		// Constructors
		Typeface_Builder(java::io::File arg0);
		Typeface_Builder(java::io::FileDescriptor arg0);
		Typeface_Builder(jstring arg0);
		Typeface_Builder(android::content::res::AssetManager arg0, jstring arg1);
		
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

