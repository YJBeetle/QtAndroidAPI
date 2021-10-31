#include "./Manifest.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	Manifest::Manifest(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Manifest::Manifest()
		: __JniBaseClass(
			"android.Manifest",
			"()V"
		) {}
	
	// Methods
} // namespace android

