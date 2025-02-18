#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace java::util
{
	class EventObject : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EventObject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventObject(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		EventObject(JObject arg0);
		
		// Methods
		JObject getSource() const;
		JString toString() const;
	};
} // namespace java::util

