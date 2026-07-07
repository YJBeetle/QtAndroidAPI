#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::adservices::adselection
{
	class PersistAdSelectionResultRequest;
}
namespace android::adservices::common
{
	class AdTechIdentifier;
}

namespace android::adservices::adselection
{
	class PersistAdSelectionResultRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PersistAdSelectionResultRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PersistAdSelectionResultRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PersistAdSelectionResultRequest_Builder();
		
		// Methods
		android::adservices::adselection::PersistAdSelectionResultRequest build() const;
		android::adservices::adselection::PersistAdSelectionResultRequest_Builder setAdSelectionDataId(jlong arg0) const;
		android::adservices::adselection::PersistAdSelectionResultRequest_Builder setAdSelectionId(jlong arg0) const;
		android::adservices::adselection::PersistAdSelectionResultRequest_Builder setAdSelectionResult(JByteArray arg0) const;
		android::adservices::adselection::PersistAdSelectionResultRequest_Builder setSeller(android::adservices::common::AdTechIdentifier arg0) const;
	};
} // namespace android::adservices::adselection

