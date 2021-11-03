#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class MutableShort : public JObject
	{
	public:
		// Fields
		jshort value();
		
		// QJniObject forward
		template<typename ...Ts> explicit MutableShort(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MutableShort(QJniObject obj);
		
		// Constructors
		MutableShort(jshort arg0);
		
		// Methods
	};
} // namespace android::util

