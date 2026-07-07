#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::measurement
{
	class SourceRegistrationRequest;
}
namespace android::view
{
	class InputEvent;
}

namespace android::adservices::measurement
{
	class SourceRegistrationRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SourceRegistrationRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SourceRegistrationRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SourceRegistrationRequest_Builder(JObject arg0);
		
		// Methods
		android::adservices::measurement::SourceRegistrationRequest build() const;
		android::adservices::measurement::SourceRegistrationRequest_Builder setInputEvent(android::view::InputEvent arg0) const;
	};
} // namespace android::adservices::measurement

