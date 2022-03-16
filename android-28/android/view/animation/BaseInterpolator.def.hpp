#pragma once

#include "../../../JObject.hpp"

namespace android::view::animation
{
	class BaseInterpolator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BaseInterpolator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BaseInterpolator(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BaseInterpolator();
		
		// Methods
	};
} // namespace android::view::animation

