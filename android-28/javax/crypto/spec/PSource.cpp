#include "../../../JString.hpp"
#include "./PSource.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QJniObject forward
	PSource::PSource(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString PSource::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::crypto::spec

