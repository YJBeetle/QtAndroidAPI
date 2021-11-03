#pragma once

#include "../../JObject.hpp"


namespace android::view
{
	class InputQueue : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InputQueue(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputQueue(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::view

