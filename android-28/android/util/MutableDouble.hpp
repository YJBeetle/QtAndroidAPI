#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class MutableDouble : public JObject
	{
	public:
		// Fields
		jdouble value();
		
		// QJniObject forward
		template<typename ...Ts> explicit MutableDouble(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MutableDouble(QJniObject obj);
		
		// Constructors
		MutableDouble(jdouble arg0);
		
		// Methods
	};
} // namespace android::util

