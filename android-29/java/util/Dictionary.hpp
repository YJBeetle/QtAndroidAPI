#pragma once

#include "../../JObject.hpp"

class JObject;

namespace java::util
{
	class Dictionary : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Dictionary(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Dictionary(QJniObject obj);
		
		// Constructors
		Dictionary();
		
		// Methods
		JObject elements();
		JObject get(JObject arg0);
		jboolean isEmpty();
		JObject keys();
		JObject put(JObject arg0, JObject arg1);
		JObject remove(JObject arg0);
		jint size();
	};
} // namespace java::util

