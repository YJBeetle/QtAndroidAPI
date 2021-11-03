#pragma once

#include "../../JObject.hpp"


namespace android::system
{
	class Int64Ref : public JObject
	{
	public:
		// Fields
		jlong value();
		
		// QJniObject forward
		template<typename ...Ts> explicit Int64Ref(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Int64Ref(QJniObject obj);
		
		// Constructors
		Int64Ref(jlong arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::system

