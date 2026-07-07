#pragma once

#include "../../JObject.hpp"

namespace java::util
{
	class EventListenerProxy : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EventListenerProxy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventListenerProxy(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		EventListenerProxy(JObject arg0);
		
		// Methods
		JObject getListener() const;
	};
} // namespace java::util

