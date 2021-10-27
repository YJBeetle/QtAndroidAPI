#include "./Manifest.hpp"

namespace android
{
	// Fields
	
	Manifest::Manifest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Manifest::Manifest()
	{
		__thiz = QAndroidJniObject(
			"android.Manifest",
			"()V"
		);
	}
	
	// Methods
} // namespace android

