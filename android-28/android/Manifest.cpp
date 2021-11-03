#include "./Manifest.hpp"

namespace android
{
	// Fields
	
	// QJniObject forward
	Manifest::Manifest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Manifest::Manifest()
		: JObject(
			"android.Manifest",
			"()V"
		) {}
	
	// Methods
} // namespace android

