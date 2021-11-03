#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class InputDevice;
}

namespace android::view
{
	class SearchEvent : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchEvent(QJniObject obj);
		
		// Constructors
		SearchEvent(android::view::InputDevice arg0);
		
		// Methods
		android::view::InputDevice getInputDevice() const;
	};
} // namespace android::view

