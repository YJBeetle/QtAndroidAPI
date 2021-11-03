#pragma once

#include "../../JObject.hpp"

namespace android::text
{
	class Layout_Directions : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Layout_Directions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Layout_Directions(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::text

