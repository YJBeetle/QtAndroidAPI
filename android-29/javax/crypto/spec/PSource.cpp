#include "./PSource.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QAndroidJniObject forward
	PSource::PSource(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring PSource::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::crypto::spec

