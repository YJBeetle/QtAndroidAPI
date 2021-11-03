#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace java::text
{
	class Annotation : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Annotation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Annotation(QAndroidJniObject obj);
		
		// Constructors
		Annotation(JObject arg0);
		
		// Methods
		JObject getValue() const;
		JString toString() const;
	};
} // namespace java::text

