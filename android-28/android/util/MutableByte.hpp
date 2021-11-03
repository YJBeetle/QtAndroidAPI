#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class MutableByte : public JObject
	{
	public:
		// Fields
		jbyte value();
		
		// QJniObject forward
		template<typename ...Ts> explicit MutableByte(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MutableByte(QJniObject obj);
		
		// Constructors
		MutableByte(jbyte arg0);
		
		// Methods
	};
} // namespace android::util

