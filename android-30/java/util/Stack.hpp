#pragma once

#include "./Vector.hpp"

class JObject;

namespace java::util
{
	class Stack : public java::util::Vector
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Stack(const char *className, const char *sig, Ts...agv) : java::util::Vector(className, sig, std::forward<Ts>(agv)...) {}
		Stack(QJniObject obj);
		
		// Constructors
		Stack();
		
		// Methods
		jboolean empty();
		JObject peek();
		JObject pop();
		JObject push(JObject arg0);
		jint search(JObject arg0);
	};
} // namespace java::util

