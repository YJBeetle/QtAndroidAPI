#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::res
{
	class AssetManager;
}
namespace java::io
{
	class File;
}

namespace android::graphics
{
	class Typeface : public __JniBaseClass
	{
	public:
		// Fields
		static jint BOLD();
		static jint BOLD_ITALIC();
		static android::graphics::Typeface DEFAULT();
		static android::graphics::Typeface DEFAULT_BOLD();
		static jint ITALIC();
		static android::graphics::Typeface MONOSPACE();
		static jint NORMAL();
		static android::graphics::Typeface SANS_SERIF();
		static android::graphics::Typeface SERIF();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Typeface(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Typeface(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Typeface create(android::graphics::Typeface arg0, jint arg1);
		static android::graphics::Typeface create(jstring arg0, jint arg1);
		static android::graphics::Typeface create(android::graphics::Typeface arg0, jint arg1, jboolean arg2);
		static android::graphics::Typeface createFromAsset(android::content::res::AssetManager arg0, jstring arg1);
		static android::graphics::Typeface createFromFile(java::io::File arg0);
		static android::graphics::Typeface createFromFile(jstring arg0);
		static android::graphics::Typeface defaultFromStyle(jint arg0);
		jboolean equals(jobject arg0);
		jint getStyle();
		jint getWeight();
		jint hashCode();
		jboolean isBold();
		jboolean isItalic();
	};
} // namespace android::graphics

