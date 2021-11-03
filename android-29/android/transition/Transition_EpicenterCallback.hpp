#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::transition
{
	class Transition;
}

namespace android::transition
{
	class Transition_EpicenterCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Transition_EpicenterCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Transition_EpicenterCallback(QJniObject obj);
		
		// Constructors
		Transition_EpicenterCallback();
		
		// Methods
		android::graphics::Rect onGetEpicenter(android::transition::Transition arg0);
	};
} // namespace android::transition

