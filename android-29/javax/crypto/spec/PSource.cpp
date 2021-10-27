#include "./PSource.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	PSource::PSource(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring PSource::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::crypto::spec

