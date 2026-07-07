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
		Dictionary(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Dictionary();
		
		// Methods
		JObject elements() const;
		JObject get(JObject arg0) const;
		jboolean isEmpty() const;
		JObject keys() const;
		JObject put(JObject arg0, JObject arg1) const;
		JObject remove(JObject arg0) const;
		jint size() const;
	};
} // namespace java::util

