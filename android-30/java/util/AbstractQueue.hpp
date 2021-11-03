#pragma once

#include "./AbstractCollection.hpp"

class JObject;

namespace java::util
{
	class AbstractQueue : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractCollection(className, sig, std::forward<Ts>(agv)...) {}
		AbstractQueue(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean add(JObject arg0);
		jboolean addAll(JObject arg0);
		void clear();
		JObject element();
		JObject remove();
	};
} // namespace java::util

