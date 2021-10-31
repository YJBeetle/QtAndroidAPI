#include "./Manifest.hpp"

namespace android
{
	// Fields
	
	// QAndroidJniObject forward
	Manifest::Manifest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Manifest::Manifest()
		: __JniBaseClass(
			"android.Manifest",
			"()V"
		) {}
	
	// Methods
} // namespace android

