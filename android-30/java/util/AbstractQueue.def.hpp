#pragma once

#include "./AbstractCollection.def.hpp"

class JObject;

namespace java::util
{
	class AbstractQueue : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractCollection(className, sig, std::forward<Ts>(agv)...) {}
		AbstractQueue(QJniObject obj) : java::util::AbstractCollection(obj) {}
		
		// Constructors
		
		// Methods
		jboolean add(JObject arg0) const;
		jboolean addAll(JObject arg0) const;
		void clear() const;
		JObject element() const;
		JObject remove() const;
	};
} // namespace java::util

