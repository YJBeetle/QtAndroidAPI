#include "./PSource.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QJniObject forward
	PSource::PSource(QJniObject obj) : JObject(obj) {}
	
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

