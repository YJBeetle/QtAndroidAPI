#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractList.hpp"
#include "./Vector.hpp"


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
		jobject peek();
		jobject pop();
		jobject push(jobject arg0);
		jint search(jobject arg0);
	};
} // namespace java::util

