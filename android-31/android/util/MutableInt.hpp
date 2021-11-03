#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class MutableInt : public JObject
	{
	public:
		// Fields
		jint value();
		
		// QJniObject forward
		template<typename ...Ts> explicit MutableInt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MutableInt(QJniObject obj);
		
		// Constructors
		MutableInt(jint arg0);
		
		// Methods
	};
} // namespace android::util

