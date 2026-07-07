#pragma once

#include "../../../JByteArray.hpp"
#include "./PersistAdSelectionResultRequest.def.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "./PersistAdSelectionResultRequest_Builder.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline PersistAdSelectionResultRequest_Builder::PersistAdSelectionResultRequest_Builder()
		: JObject(
			"android.adservices.adselection.PersistAdSelectionResultRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::adselection::PersistAdSelectionResultRequest PersistAdSelectionResultRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/adselection/PersistAdSelectionResultRequest;"
		);
	}
	inline android::adservices::adselection::PersistAdSelectionResultRequest_Builder PersistAdSelectionResultRequest_Builder::setAdSelectionDataId(jlong arg0) const
	{
		return callObjectMethod(
			"setAdSelectionDataId",
			"(J)Landroid/adservices/adselection/PersistAdSelectionResultRequest$Builder;",
			arg0
		);
	}
	inline android::adservices::adselection::PersistAdSelectionResultRequest_Builder PersistAdSelectionResultRequest_Builder::setAdSelectionId(jlong arg0) const
	{
		return callObjectMethod(
			"setAdSelectionId",
			"(J)Landroid/adservices/adselection/PersistAdSelectionResultRequest$Builder;",
			arg0
		);
	}
	inline android::adservices::adselection::PersistAdSelectionResultRequest_Builder PersistAdSelectionResultRequest_Builder::setAdSelectionResult(JByteArray arg0) const
	{
		return callObjectMethod(
			"setAdSelectionResult",
			"([B)Landroid/adservices/adselection/PersistAdSelectionResultRequest$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::adservices::adselection::PersistAdSelectionResultRequest_Builder PersistAdSelectionResultRequest_Builder::setSeller(android::adservices::common::AdTechIdentifier arg0) const
	{
		return callObjectMethod(
			"setSeller",
			"(Landroid/adservices/common/AdTechIdentifier;)Landroid/adservices/adselection/PersistAdSelectionResultRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
