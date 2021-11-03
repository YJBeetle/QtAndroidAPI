#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class MutableLong : public JObject
	{
	public:
		// Fields
		jlong value();
		
		// QJniObject forward
		template<typename ...Ts> explicit MutableLong(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MutableLong(QJniObject obj);
		
		// Constructors
		MutableLong(jlong arg0);
		
		// Methods
	};
} // namespace android::util

