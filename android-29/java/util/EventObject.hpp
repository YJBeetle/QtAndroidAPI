#pragma once

#include "../../JObject.hpp"


namespace java::util
{
	class EventObject : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EventObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventObject(QAndroidJniObject obj);
		
		// Constructors
		EventObject(jobject arg0);
		
		// Methods
		jobject getSource();
		jstring toString();
	};
} // namespace java::util

