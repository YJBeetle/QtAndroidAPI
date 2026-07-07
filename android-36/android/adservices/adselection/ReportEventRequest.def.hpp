#pragma once

#include "../../../JObject.hpp"

namespace android::view
{
	class InputEvent;
}
class JString;

namespace android::adservices::adselection
{
	class ReportEventRequest : public JObject
	{
	public:
		// Fields
		static jint FLAG_REPORTING_DESTINATION_BUYER();
		static jint FLAG_REPORTING_DESTINATION_COMPONENT_SELLER();
		static jint FLAG_REPORTING_DESTINATION_SELLER();
		
		// QJniObject forward
		template<typename ...Ts> explicit ReportEventRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReportEventRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jlong getAdSelectionId() const;
		JString getData() const;
		android::view::InputEvent getInputEvent() const;
		JString getKey() const;
		jint getReportingDestinations() const;
	};
} // namespace android::adservices::adselection

