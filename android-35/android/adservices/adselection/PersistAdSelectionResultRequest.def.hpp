#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::adservices::common
{
	class AdTechIdentifier;
}

namespace android::adservices::adselection
{
	class PersistAdSelectionResultRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PersistAdSelectionResultRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PersistAdSelectionResultRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jlong getAdSelectionDataId() const;
		jlong getAdSelectionId() const;
		JByteArray getAdSelectionResult() const;
		android::adservices::common::AdTechIdentifier getSeller() const;
	};
} // namespace android::adservices::adselection

