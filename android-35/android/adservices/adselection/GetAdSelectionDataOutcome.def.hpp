#pragma once

#include "../../../JObject.hpp"

class JByteArray;

namespace android::adservices::adselection
{
	class GetAdSelectionDataOutcome : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GetAdSelectionDataOutcome(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetAdSelectionDataOutcome(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JByteArray getAdSelectionData() const;
		jlong getAdSelectionDataId() const;
		jlong getAdSelectionId() const;
	};
} // namespace android::adservices::adselection

