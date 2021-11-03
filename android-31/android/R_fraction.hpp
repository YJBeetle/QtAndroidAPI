#pragma once

#include "../JObject.hpp"

namespace android
{
	class R_fraction : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit R_fraction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_fraction(QJniObject obj);
		
		// Constructors
		R_fraction();
		
		// Methods
	};
} // namespace android

