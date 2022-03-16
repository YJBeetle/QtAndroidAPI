#pragma once

#include "../JObject.hpp"

namespace android
{
	class R_raw : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit R_raw(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_raw(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		R_raw();
		
		// Methods
	};
} // namespace android

