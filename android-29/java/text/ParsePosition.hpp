#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace java::text
{
	class ParsePosition : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParsePosition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ParsePosition(QAndroidJniObject obj);
		
		// Constructors
		ParsePosition(jint arg0);
		
		// Methods
		jboolean equals(JObject arg0);
		jint getErrorIndex();
		jint getIndex();
		jint hashCode();
		void setErrorIndex(jint arg0);
		void setIndex(jint arg0);
		JString toString();
	};
} // namespace java::text

